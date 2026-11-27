/* LEVEL_09:0x177E38 -- placement copy of LEVEL_01_1843A8.c: classifies a state code and, for the matching classes, runs a follow-up when a flag is set. */

extern void func_177BB8(char *a0);

void func_177E38(unsigned char *a0, unsigned char *a1)
{
    int flag;
    int sub;

    flag = 0;
    switch (*(short *)(a1 + 0x100)) {
    case 0x23:
    case 0x48:
        break;
    case 0x1F:
        sub = *(unsigned short *)(a1 + 0x108);
        if (sub < 11) {
            if (sub >= 9) {
                break;
            }
        }
        /* fall through */
    default:
        flag = 1;
        break;
    }
    if (flag && a0[0x46] != 0) {
        func_177BB8((char *)a0);
    }
}
