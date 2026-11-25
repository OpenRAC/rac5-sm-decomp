/* LEVEL_08:0x144C68 -- placement copy of LEVEL_01_133730.c: placement copy of FRONTEND_0210C0.c: checks a slot record's two sentinel fields and reports whether the second is not below the first. */
extern char *D_0024FF0C;
extern int func_1443F8(int a);
extern int func_144338(void);

int func_144C68(void)
{
    if (D_0024FF0C == 0) {
        return 1;
    }
    if (*(unsigned int *)(D_0024FF0C + 0xA4) == 0xFFFFFFFF) {
        return 0;
    }
    if (*(unsigned int *)(D_0024FF0C + 0xA8) == 0xFFFFFFFF) {
        return 0;
    }
    if (func_1443F8(1) == 0) {
        return 0;
    }
    if (((int (*)(int))func_144338)(1) != 0) {
        return 1;
    }
    return *(unsigned int *)(D_0024FF0C + 0xA4) >= *(unsigned int *)(D_0024FF0C + 0xA8);
}
