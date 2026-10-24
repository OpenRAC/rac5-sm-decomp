/* LEVEL_04.REL:0x032438 -- asks the builder for the two frame floats, then
   draws the object with them and the caller's two handles. */
extern void func_0320D8(void *a0, void *a1, float *buf, void *a2, void *a3);
extern void func_031D58(void *a0, void *a1, void *a2, float f12, float f13);

void func_032438(void *a0, void *a1, void *a2, void *a3)
{
    float buf[2];

    func_0320D8(a0, a1, buf, a2, a3);
    func_031D58(a0, a1, a2, buf[0], buf[1]);
}
