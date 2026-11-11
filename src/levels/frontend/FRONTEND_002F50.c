/* FRONTEND.REL:0x002F50 -- the same body as FRONTEND_002F28.c, with the address this placement uses (D_00027EA0). */
extern int D_00027EA0[];

int func_02F28(void)
{
    unsigned char *p = (unsigned char *)D_00027EA0[0];

    if (p != 0) {
        if (*p != 0)
            return 1;
    }
    return 0;
}
