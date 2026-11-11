/* LEVEL_04:0x1E4710 -- lazily creates three handles and initialises a fourth object. */
extern int D_002227FC;
extern int D_00222800;
extern int D_00222804;
extern int D_00222808;
extern int D_002B2698;
extern int D_002B2670;
extern int D_002B2678;
extern int D_003B3E78;
extern int D_00244858;

extern int func_10B078(int key);
extern int func_105D88(int key);
extern void func_105360(int *p);
extern int func_10C970(int key);
extern void func_136488(int *p, int *q, int n);

void func_1E4710(void)
{
    if (D_002227FC == -1)
        D_002227FC = func_10B078((D_002B2698 << 16) | 0xC00070C1);
    if (D_00222800 == -1) {
        D_00222800 = func_105D88((D_002B2670 << 16) | 0xC0001044);
        func_105360(&D_00222808);
    }
    if (D_00222804 == -1)
        D_00222804 = func_10C970((D_002B2678 << 16) | 0xC00010C1);
    if (D_003B3E78 == 0)
        func_136488(&D_003B3E78, &D_00244858, 3);
}
