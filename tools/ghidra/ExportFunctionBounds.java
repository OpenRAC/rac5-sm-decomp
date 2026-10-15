import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;

import java.io.FileOutputStream;
import java.io.File;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.nio.charset.StandardCharsets;

public class ExportFunctionBounds extends GhidraScript {
    @Override
    public void run() throws Exception {
        String destination = getScriptArgs()[0];
        File target = new File(destination);
        if (target.isDirectory()) {
            target = new File(target, currentProgram.getName() + ".ghidra.tsv");
        }
        int count = 0;
        try (PrintWriter out = new PrintWriter(new OutputStreamWriter(
                new FileOutputStream(target), StandardCharsets.UTF_8))) {
            out.println("entry\tmin\tmax\tbody_bytes\tname");
            FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
            for (Function function : functions) {
                out.printf("0x%X\t0x%X\t0x%X\t%d\t%s%n",
                        function.getEntryPoint().getOffset(),
                        function.getBody().getMinAddress().getOffset(),
                        function.getBody().getMaxAddress().getOffset(),
                        function.getBody().getNumAddresses(),
                        function.getName());
                count++;
            }
        }
        println("exported function count " + count);
    }
}
