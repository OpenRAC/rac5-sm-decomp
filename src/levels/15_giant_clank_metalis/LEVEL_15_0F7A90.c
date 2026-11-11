/* LEVEL_15.REL:0x0F7A90 -- runs the whole chain of subsystem resets and then
   clears the two state blocks. */
extern char D_002A8B58[];
extern char D_00000000[];

extern void func_0219D0(float f12);
extern void func_12B138(void);
extern void func_125E48(void);
extern void func_1274E0(void);
extern void func_0F7978(void);
extern void func_0F6388(void);
extern void func_0F64E8(void);
extern void func_0F8670(void);
extern void func_0F51A8(void);
extern void func_0F6378(void);
extern void func_0FE1E8(void);
extern void func_136170(void);
extern void func_0F76D8(void);
extern void func_0FA640(void);
extern void func_128998(void);
extern void func_0F6778(void);
extern void func_0F73A0(void);

void func_0F7A90(void)
{
    float zero = 0.0f;

    func_0219D0(zero);
    func_12B138();
    func_125E48();
    func_1274E0();
    func_0F7978();
    func_0F6388();
    func_0F64E8();
    func_0F8670();
    func_0F51A8();
    func_0F6378();
    func_0FE1E8();
    func_136170();
    func_0F76D8();
    func_0FA640();
    func_128998();
    func_0F6778();
    func_0F73A0();
    {
        char *base = D_002A8B58;
        char *p = base + 0x40000;

        *(char *)D_00000000 = 0;
        *(char *)(p + 0x403C) = 1;
        *(char *)(base + 0x1C) = 0;
        *(float *)(p + 0x404C) = zero;
        *(float *)(p + 0x4070) = 1.0f;
        *(int *)(p + 0x4040) = 0;
    }
}
