/* LEVEL_19:0x0B6120 -- placement copy of LEVEL_01_0C7BD8.c: starts the object's action: code 3 while the mode global is 1, code 0x1D while the alternate flag is set, otherwise the default start. */
extern int D_001AFE04;
extern unsigned char D_001AFDA8;
extern void func_112450(int *p, int a1);
extern void func_112480(char *record);

void func_0B6120(char *o)
{
    if (D_001AFE04 == 1)
        func_112450((int *)o, 3);
    else if (D_001AFDA8 != 0)
        func_112450((int *)o, 0x1D);
    else
        func_112480(o);
}
