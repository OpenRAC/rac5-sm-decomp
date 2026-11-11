/* Initializes four cached handles through the module-local creator. */
typedef unsigned int u32;

extern int D_0020E6FC;
extern int D_0020E700;
extern int D_0020E704;
extern int D_0020E708;
extern u32 D_002B2C78;
extern u32 D_002B2C6C;
extern u32 D_002B2C7C;

extern int func_108650(u32 mode);

void func_072410(void)
{
    if (D_0020E6FC == -1)
        D_0020E6FC = func_108650((D_002B2C78 << 16) | 0xB8003045u);
    if (D_0020E700 == -1)
        D_0020E700 = func_108650((D_002B2C78 << 16) | 0xB00030C5u);
    if (D_0020E704 == -1)
        D_0020E704 = func_108650((D_002B2C6C << 16) | 0xB00030C5u);
    if (D_0020E708 == -1)
        D_0020E708 = func_108650((D_002B2C7C << 16) | 0xB8003045u);
}
