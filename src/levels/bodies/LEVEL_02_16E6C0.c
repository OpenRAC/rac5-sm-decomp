/* LEVEL_02.REL:0x16E6C0 -- fills a local record and hands it to the level's
   spawn with the current global rate. */
extern float D_24C92C;
extern void func_01AC80(void *);
extern void func_16DE90(int, int, void *);

void func_16E6C0(int a0, int a1)
{
    char buf[0x10];

    func_01AC80(buf);
    *(float *)(buf + 4) = D_24C92C;
    func_16DE90(a0, a1, buf);
}
