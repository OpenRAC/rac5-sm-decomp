/* LEVEL_16:0x14A8D0 -- builds a scratch record, fills one of its words with a
   global float, and applies it. */
extern float D_1E436C;

extern void func_018710(void *buf);
extern void func_14A0D8(void *self, void *a1, void *buf);

void func_14A8D0(void *self, void *a1)
{
    char buf[0x10];

    func_018710(buf);
    *(float *)(buf + 4) = D_1E436C;
    func_14A0D8(self, a1, buf);
}
