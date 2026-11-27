// Authored GUI-free context for the pinned Ghidra StructureRecovery tasks.
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;

import ghidra.app.services.ConsoleService;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.Structure;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Program;

public class HeadlessStructureContext {
    public enum FunctionMatchOption { SOLO_MATCHES, SOLO_OR_MIN_CONFIDENCE, MAX_WEIGHT }
    public static final String REGENERATE_STRUCT = "Generate structure";

    private final Program source;
    private final Program target;
    private final Structure structure;
    private final ConsoleService console;
    private final Map<String, Long> offsets = new TreeMap<>();
    private Set<Function> functions = new HashSet<>();
    private Map<Function, Set<Function>> functionMap = new HashMap<>();
    private Map<String, Set<Function>> byField = new HashMap<>();
    private Map<String, AddressSet> addresses = new HashMap<>();

    public HeadlessStructureContext(Program source, Program target, Structure structure,
            ConsoleService console) {
        this.source = source;
        this.target = target;
        this.structure = structure;
        this.console = console;
        // Same selection as the official plugin: named fields at nonzero offsets.
        for (DataTypeComponent field : structure.getComponents()) {
            if (field.getFieldName() != null && field.getOffset() > 0) {
                offsets.put(field.getFieldName(), (long) field.getOffset());
            }
        }
    }

    public Program getCurrentProgram() { return source; }
    public Program getTargetProgram() { return target; }
    public Structure getTargetDataType() { return structure; }
    public ConsoleService getConsole() { return console; }
    public Map<String, Long> getOffsets() { return offsets; }
    public Set<Long> getExcludedOffsets() { return Collections.emptySet(); }

    // Reviewed defaults from the pinned official plugin, not fitted per input.
    public long getMaxOffset() { return 100000; }
    public double getSelfSiginificanceBound() { return 15.0; }
    public double getMatchSimilarityLowerBound() { return 0.3; }
    public double getMatchSimilarityUpperBound() { return 1.0; }
    public double getMatchConfidenceLowerBound() { return 0.0; }
    public double getMinConfidence() { return 20.0; }
    public FunctionMatchOption getOptionSoloMatchesOnly() {
        return FunctionMatchOption.SOLO_OR_MIN_CONFIDENCE;
    }
    public boolean getOptionStructUseBookmarks() { return true; }
    public boolean getOptionFnMatchBookmarks() { return true; }

    public Set<Function> getFunctionsToMatch() { return functions; }
    public void setFunctionsToMatch(Set<Function> functions) { this.functions = functions; }
    public Map<String, Set<Function>> getFunctionsByField() { return byField; }
    public void setFunctionsByField(Map<String, Set<Function>> byField) {
        this.byField = byField;
    }
    public Map<String, AddressSet> getAddressesByField() { return addresses; }
    public void setAddressesByField(Map<String, AddressSet> addresses) {
        this.addresses = addresses;
    }
    public Map<Function, Set<Function>> getFunctionMap() { return functionMap; }
    public void setFunctionMap(Map<Function, Set<Function>> functionMap) {
        this.functionMap = functionMap;
    }
}
