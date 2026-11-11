/* LEVEL_17:0x10FA10 -- placement copy of FRONTEND_0210C0.c: checks a slot record's two sentinel fields and reports whether the second is not below the first. */
extern char *D_001A815C;
extern int func_10F230(int a);
extern int func_10F1F0(int a);

int func_10FA10(void)
{
    if (D_001A815C == 0) {
        return 1;
    }
    if (*(unsigned int *)(D_001A815C + 0xA4) == 0xFFFFFFFF) {
        return 0;
    }
    if (*(unsigned int *)(D_001A815C + 0xA8) == 0xFFFFFFFF) {
        return 0;
    }
    if (func_10F230(1) == 0) {
        return 0;
    }
    if (func_10F1F0(1) != 0) {
        return 1;
    }
    return *(unsigned int *)(D_001A815C + 0xA4) >= *(unsigned int *)(D_001A815C + 0xA8);
}
