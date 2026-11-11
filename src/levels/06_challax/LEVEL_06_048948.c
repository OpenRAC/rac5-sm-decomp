/* LEVEL_06.REL:0x048948 -- opens a hole at the caller's index in the three
   parallel tables and drops the new entry in it. */
extern float D_00225948[];
extern signed char D_00225988[];

void func_048948(void *a0, int a1, int a2, int *a3, int n, float f)
{
    int i;

    for (i = n - 1; i > a2; i--) {
        a3[i] = a3[i - 1];
        D_00225948[i] = D_00225948[i - 1];
        D_00225988[i] = D_00225988[i - 1];
    }
    a3[a2] = (int)a0;
    D_00225948[a2] = f;
    D_00225988[a2] = a1;
}
