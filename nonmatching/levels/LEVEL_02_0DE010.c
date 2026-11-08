/* LEVEL_02.REL:0x0DE010: reviewed 80-byte candidate.
 * pinned C with gnu-ee-trial links 80 bytes; first differs at +34.
 * Retry: Find authentic source usage of the XOR return-code test or a qualified route
 * that emits xori from the direct inequality; the exact XOR diagnostic stays private.
 * No matching credit.
 */
extern int func_01B1C8(int value);
extern int func_0C2640(void);
extern void func_0C1CB8(int value);
extern void func_0C2D10(int value, int option);

void func_0DE010(void)
{
    if (func_01B1C8(6) != 0) {
        if (func_0C2640() != 0x22)
            func_0C1CB8(0x22);
    } else {
        func_0C2D10(0x22, 0);
    }
}
