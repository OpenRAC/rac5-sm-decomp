/* LEVEL_20:0x0C60A8 -- asks the engine for a record; if the engine reports
   success, the record gets the float 1.0 and the caller's second argument
   in its second integer slot. */
void *func_075968(void *a, void *b, int c);

void func_0C60A8(void *a0, void *a1)
{
    void *v1;
    int flag;
    v1 = func_075968(&flag, a0, 1);
    if (flag != 0) {
        *(int *)((char *)v1 + 4) = (int)a1;
        *(float *)((char *)v1 + 0) = 1.0f;
    }
}
