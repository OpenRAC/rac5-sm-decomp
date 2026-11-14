/* LEVEL_02:0x173460 -- placement copy of LEVEL_01_15F1E8.c: forwards the object to the shared handler with the fixed table and reports success. */
extern char D_003AB800[];

extern void func_1E2128(void *table, void *p);

int func_173460(void *p)
{
    func_1E2128(D_003AB800, p);
    return 1;
}
