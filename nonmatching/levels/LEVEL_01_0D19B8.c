/* LEVEL_01.REL:0x0D19B8, bounded 188-byte candidate.
 * Isolated pinned C object: 184 bytes; first linked
 * difference at body byte +4. Not linked into the accepted
 * gate or counted.
 * Reopen: Eight calls and globals; the prologue signature and temporaries are still wrong. Reopen from the complete disassembly of the prologue.
 */
extern int D_002046FC;
extern char D_001F3FAC[];
extern int D_002045E4;
extern char D_002045E9[];

extern int func_0D9220(int a);
extern void func_024628(int a, long b);
extern void func_024670(int a, long b);
extern int func_0D1778(void);
extern int func_024A38(int a);
extern void func_024A68(int a, int b, long c);
extern void func_023AB8(int a, int b);
extern void func_0D2408(void);

void func_000D19B8(void)
{
    int obj;

    obj = func_0D9220(0x32CB18);
    func_024628(*(int *)(obj + 0x24), -1);
    func_024670(*(int *)(obj + 0x24), -1);
    {
        int value = func_0D1778();
        int ok = func_024A38(value);
        D_002046FC = 0;
        *(int *)(D_001F3FAC + 0x1C68) = *(int *)(D_001F3FAC + 0x1C68) - D_002045E4;
        D_002045E9[0] = 1;
        if (ok != 0) {
            func_024A68(*(int *)(obj + 0x24), value, -1);
            func_023AB8(0x235140, *(int *)(obj + 0x24));
            func_0D2408();
        }
    }
}
