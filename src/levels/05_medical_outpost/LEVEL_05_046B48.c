/* LEVEL_05:046B48 -- hands the object's tail and its field at +0x23C to the
   level's routine. */
extern void func_046AE8(void *a0, void *a1, float f12);
void func_046B48(char *a0)
{
    func_046AE8(a0, a0 + 0x200, *(float *)(a0 + 0x23C));
}
