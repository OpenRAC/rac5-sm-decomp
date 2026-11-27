// Authored driver; upstream algorithms are generated separately from pinned sources.
// @category Analysis.StructureRecovery
import java.io.PrintWriter;
import java.io.StringWriter;
import java.lang.reflect.Proxy;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.StandardCopyOption;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HexFormat;
import java.util.LinkedHashMap;
import java.util.Map;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import com.google.gson.JsonArray;
import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import com.google.gson.JsonParser;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.script.GhidraScript;
import ghidra.app.services.ConsoleService;
import ghidra.program.database.ProgramDB;
import ghidra.program.flatapi.FlatProgramAPI;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.data.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.SourceType;

public class RunStructureRecovery extends GhidraScript {
    private final Gson gson = new GsonBuilder().setPrettyPrinting().create();
    private final JsonArray results = new JsonArray();
    private final Map<Program, JsonObject> specifications = new HashMap<>();
    private Path root;
    private JsonObject manifest;
    private int pointerSize;

    @Override
    public void run() throws Exception {
        root = Path.of(getScriptArgs()[0]).toAbsolutePath().normalize();
        manifest = JsonParser.parseString(Files.readString(root.resolve("manifest.json")))
                .getAsJsonObject();
        pointerSize = manifest.get("pointer_size").getAsInt();
        if (currentProgram.getDataTypeManager().getDataOrganization().getPointerSize() != pointerSize) {
            throw new IllegalArgumentException("Supplied pointer size disagrees with compiler spec");
        }
        for (JsonElement element : manifest.getAsJsonArray("cases")) {
            runCase(element.getAsJsonObject());
        }
    }

    private void runCase(JsonObject specification) throws Exception {
        String id = specification.get("id").getAsString();
        println("CASE_BEGIN " + id);
        JsonObject result = new JsonObject();
        result.addProperty("id", id);
        results.add(result);
        ProgramDB source = null;
        ProgramDB target = null;
        try {
            source = createProgram(id + "_source", specification.getAsJsonObject("source"));
            target = createProgram(id + "_target", specification.getAsJsonObject("target"));
            Structure known = createSourceTypes(source, specification);
            setSignature(source, known);
            setSignature(target, null);
            result.add("source_fields", fields(known, "SUPPLIED_WITH_PROVENANCE"));
            result.add("source_type_declarations", specification.get("types"));
            result.addProperty("source_decompile", decompile(source));
            result.addProperty("target_decompile_before", decompile(target));
            JsonArray taskLog = new JsonArray();
            ConsoleService console = (ConsoleService) Proxy.newProxyInstance(
                    ConsoleService.class.getClassLoader(), new Class<?>[] { ConsoleService.class },
                    (proxy, method, arguments) -> {
                        String message = method.getName() + " " + Arrays.toString(arguments);
                        taskLog.add(message);
                        println(id + ": " + message);
                        if (method.getReturnType() == boolean.class) return false;
                        if (method.getReturnType() == int.class) return 0;
                        return null;
                    });
            HeadlessStructureContext context =
                    new HeadlessStructureContext(source, target, known, console);
            JsonObject parameters = new JsonObject();
            parameters.addProperty("template", "medium_nosize");
            parameters.addProperty("self_significance_bound", context.getSelfSiginificanceBound());
            parameters.addProperty("similarity_lower", context.getMatchSimilarityLowerBound());
            parameters.addProperty("similarity_upper", context.getMatchSimilarityUpperBound());
            parameters.addProperty("confidence_lower", context.getMatchConfidenceLowerBound());
            parameters.addProperty("bookmark_confidence", context.getMinConfidence());
            parameters.addProperty("max_offset", context.getMaxOffset());
            parameters.addProperty("match_option", context.getOptionSoloMatchesOnly().name());
            result.add("parameters", parameters);
            new RetrieveUsesTask(context).run(monitor);
            result.addProperty("functions_with_source_uses", context.getFunctionsToMatch().size());
            JsonObject uses = new JsonObject();
            for (var entry : context.getAddressesByField().entrySet()) {
                JsonArray addresses = new JsonArray();
                for (Address address : entry.getValue().getAddresses(true)) {
                    addresses.add(address.toString());
                }
                uses.add(entry.getKey(), addresses);
            }
            result.add("observed_source_field_use_addresses", uses);
            new MatchFunctionsTask(context, target).run(monitor);
            JsonArray matches = new JsonArray();
            for (var entry : context.getFunctionMap().entrySet()) {
                for (Function function : entry.getValue()) {
                    JsonObject match = new JsonObject();
                    match.addProperty("source", entry.getKey().getEntryPoint().toString());
                    match.addProperty("target", function.getEntryPoint().toString());
                    match.addProperty("status", "HYPOTHESIS");
                    matches.add(match);
                }
            }
            result.add("bsim_matches", matches);
            if (!matches.isEmpty()) {
                ComparePinningsTask comparison = new ComparePinningsTask(context);
                comparison.run(monitor);
                // Read recorded votes without changing upstream decisions or construction.
                var votes = ComparePinningsTask.class.getDeclaredField("results");
                votes.setAccessible(true);
                result.add("observed_offset_votes", gson.toJsonTree(votes.get(comparison)));
            }
            DataType recovered = target.getDataTypeManager().getDataType("/RECOVERED_" + known.getName());
            result.add("proposed_fields", recovered instanceof Structure structure
                    ? fields(structure, "HYPOTHESIS") : new JsonArray());
            result.add("task_log", taskLog);
            result.add("observed_source_instructions", instructions(source));
            result.add("observed_target_instructions", instructions(target));
            if (recovered instanceof Structure structure && specification.get("preview_apply").getAsBoolean()) {
                setSignature(target, structure);
                result.addProperty("target_decompile_after_preview", decompile(target));
                result.addProperty("preview_applied_only_to_new_private_copy", true);
            }
            result.addProperty("status", "OBSERVED");
            var folder = state.getProject().getProjectData().getRootFolder();
            folder.createFile(id + "_source", source, monitor);
            folder.createFile(id + "_target", target, monitor);
        }
        catch (Exception exception) {
            result.addProperty("status", "ERROR");
            result.addProperty("exception", exception.toString());
            StringWriter trace = new StringWriter();
            exception.printStackTrace(new PrintWriter(trace));
            result.addProperty("trace", trace.toString());
            println(trace.toString());
        }
        finally {
            if (source != null) source.release(this);
            if (target != null) target.release(this);
            writeResults();
        }
        println("CASE_END " + id);
    }

    private void writeResults() throws Exception {
        JsonObject output = new JsonObject();
        output.addProperty("run_id", manifest.get("run_id").getAsString());
        output.addProperty("ghidra_version", ghidra.framework.Application.getApplicationVersion());
        output.addProperty("language", currentProgram.getLanguageID().toString());
        output.addProperty("evidence_level", "structure-layout hypotheses only");
        output.addProperty("automatic_promotion", false);
        output.addProperty("establishes_function_identity", false);
        output.addProperty("establishes_C_match", false);
        output.add("cases", results);
        Path temporary = root.resolve("proposals.json.tmp");
        Files.writeString(temporary, gson.toJson(output) + "\n");
        Files.move(temporary, root.resolve("proposals.json"), StandardCopyOption.REPLACE_EXISTING);
    }

    private ProgramDB createProgram(String name, JsonObject specification) throws Exception {
        var language = currentProgram.getLanguage();
        ProgramDB program = new ProgramDB(name, language,
                language.getCompilerSpecByID(currentProgram.getCompilerSpec().getCompilerSpecID()), this);
        boolean success = false;
        int transaction = program.startTransaction("New input fragment");
        try {
            Path path = root.resolve("inputs").resolve(specification.get("file").getAsString()).normalize();
            if (!path.startsWith(root.resolve("inputs"))) {
                throw new IllegalArgumentException("Input path escaped the new private output");
            }
            byte[] bytes = Files.readAllBytes(path);
            String hash = HexFormat.of().formatHex(MessageDigest.getInstance("SHA-256").digest(bytes));
            if (!hash.equals(specification.get("sha256").getAsString()) || bytes.length != specification.get("size").getAsInt()) {
                throw new IllegalArgumentException("Staged input no longer matches the checked manifest");
            }
            Address address = program.getAddressFactory().getDefaultAddressSpace()
                    .getAddress(specification.get("address").getAsLong());
            var block = program.getMemory().createInitializedBlock("input_code", address,
                    bytes.length, (byte) 0, monitor, false);
            block.setExecute(true);
            block.setWrite(false);
            program.getMemory().setBytes(address, bytes);
            if (!new FlatProgramAPI(program, monitor).disassemble(address)) {
                throw new IllegalArgumentException("Fragment could not be disassembled");
            }
            program.getFunctionManager().createFunction("input_entry", address,
                    new AddressSet(address, address.add(bytes.length - 1)), SourceType.USER_DEFINED);
            specifications.put(program, specification);
            success = true;
            return program;
        }
        finally {
            program.endTransaction(transaction, success);
            if (!success) program.release(this);
        }
    }

    private Structure createSourceTypes(Program program, JsonObject specification) throws Exception {
        var manager = program.getDataTypeManager();
        Map<String, Structure> declared = new LinkedHashMap<>();
        boolean success = false;
        int transaction = program.startTransaction("Source declarations with supplied provenance");
        try {
            for (JsonElement element : specification.getAsJsonArray("types")) {
                JsonObject schema = element.getAsJsonObject();
                Structure structure = new StructureDataType(schema.get("name").getAsString(),
                        schema.get("size").getAsInt(), manager);
                for (JsonElement fieldElement : schema.getAsJsonArray("fields")) {
                    JsonObject field = fieldElement.getAsJsonObject();
                    String typeName = field.get("type").getAsString();
                    DataType type = declared.containsKey(typeName) ? declared.get(typeName)
                            : primitive(program, typeName);
                    int count = field.get("count").getAsInt();
                    if (count > 1) type = new ArrayDataType(type, count, type.getLength(), manager);
                    structure.replaceAtOffset(field.get("offset").getAsInt(), type, type.getLength(),
                            field.get("name").getAsString(), schema.get("provenance").getAsString());
                }
                Structure stored = (Structure) manager.addDataType(structure, DataTypeConflictHandler.DEFAULT_HANDLER);
                declared.put(schema.get("name").getAsString(), stored);
            }
            success = true;
            return declared.get(specification.get("source_structure").getAsString());
        }
        finally { program.endTransaction(transaction, success); }
    }

    private DataType primitive(Program program, String name) {
        return switch (name) {
            case "int8" -> SignedByteDataType.dataType;
            case "uint8" -> ByteDataType.dataType;
            case "int16" -> ShortDataType.dataType;
            case "uint16" -> UnsignedShortDataType.dataType;
            case "int32" -> IntegerDataType.dataType;
            case "uint32" -> UnsignedIntegerDataType.dataType;
            case "int64" -> LongLongDataType.dataType;
            case "uint64" -> UnsignedLongLongDataType.dataType;
            case "float32" -> FloatDataType.dataType;
            case "float64" -> DoubleDataType.dataType;
            case "pointer" -> new PointerDataType(VoidDataType.dataType, pointerSize, program.getDataTypeManager());
            case "void" -> VoidDataType.dataType;
            default -> throw new IllegalArgumentException("Unsupported type: " + name);
        };
    }

    private void setSignature(Program program, Structure sourceType) throws Exception {
        boolean success = false;
        int transaction = program.startTransaction("Supplied function prototype");
        try {
            Function function = program.getFunctionManager().getFunctions(true).next();
            function.setCallingConvention(program.getCompilerSpec().getDefaultCallingConvention().getName());
            ArrayList<Variable> parameters = new ArrayList<>();
            parameters.add(new ParameterImpl("record", new PointerDataType(
                    sourceType == null ? VoidDataType.dataType : sourceType, pointerSize,
                    program.getDataTypeManager()), program));
            JsonArray arguments = specifications.get(program).getAsJsonArray("arguments");
            for (int index = 1; index < arguments.size(); index++) {
                parameters.add(new ParameterImpl("argument" + index,
                        primitive(program, arguments.get(index).getAsString()), program));
            }
            function.replaceParameters(Function.FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS,
                    true, SourceType.USER_DEFINED, parameters.toArray(new Variable[0]));
            function.setReturnType(primitive(program, specifications.get(program).get("return_type").getAsString()), SourceType.USER_DEFINED);
            success = true;
        }
        finally { program.endTransaction(transaction, success); }
    }

    private String decompile(Program program) throws Exception {
        DecompInterface decompiler = new DecompInterface();
        try {
            decompiler.openProgram(program);
            var result = decompiler.decompileFunction(program.getFunctionManager().getFunctions(true).next(), 30, monitor);
            return result.decompileCompleted() ? result.getDecompiledFunction().getC()
                    : "UNVERIFIED: " + result.getErrorMessage();
        }
        finally { decompiler.dispose(); }
    }

    private JsonArray fields(Structure structure, String status) {
        JsonArray output = new JsonArray();
        for (var field : structure.getDefinedComponents()) {
            JsonObject item = new JsonObject();
            item.addProperty("name", field.getFieldName());
            item.addProperty("offset", field.getOffset());
            item.addProperty("length", field.getLength());
            item.addProperty("type", field.getDataType().getDisplayName());
            item.addProperty("status", status);
            output.add(item);
        }
        return output;
    }

    private JsonArray instructions(Program program) {
        JsonArray output = new JsonArray();
        for (var instruction : program.getListing().getInstructions(true)) {
            JsonObject item = new JsonObject();
            item.addProperty("address", instruction.getAddress().toString());
            item.addProperty("instruction", instruction.toString());
            item.addProperty("status", "OBSERVED");
            output.add(item);
        }
        return output;
    }
}
