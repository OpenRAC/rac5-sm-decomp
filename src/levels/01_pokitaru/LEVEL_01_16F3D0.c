/* LEVEL_01:0x16F3D0 -- builds a buffer, fills its second word from the
   global float, and hands it to func_16EC60 with the caller's two words. */
extern float D_0023541C;

extern void func_01A2A0(void *p);
extern void func_16EC60(void *a, void *b, void *c);

void func_16F3D0(void *a0, void *a1)
{
    float buf[4];

    func_01A2A0(buf);
    buf[1] = D_0023541C;
    func_16EC60(a0, a1, buf);
}
