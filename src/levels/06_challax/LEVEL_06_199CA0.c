/* LEVEL_06:0x199CA0 -- looks up three named assets and caches their ids in the globals. */
extern int func_1206C0(unsigned int value);
extern int D_001F7BB4;
extern int D_001F7BB8;
extern int D_001F7BBC;

void func_199CA0(void)
{
    D_001F7BB8 = func_1206C0(0x9C1D9175u);
    D_001F7BBC = func_1206C0(0xB3CE430Fu);
    D_001F7BB4 = func_1206C0(0xFDC0FC85u);
}
