/* LEVEL_10:0x150728 -- clears the caller's first half-word, asks the engine
   to build the object's 0x48 sub-record, then writes 60.0 into the object's
   0x80 field. */
extern char D_0039AF38[];
extern char D_0039B1DC[];

void func_02E460(void *a, void *b, void *c, void *d, void *e);

void func_150728(void *a0, void *a1, void *a2)
{
    *(short *)a0 = 0;
    func_02E460((char *)a0 + 0x48, D_0039B1DC, D_0039AF38, a1, a2);
    *(float *)((char *)a0 + 0x80) = 60.0f;
}
