/* LEVEL_18.REL:0E58B8 -- asks func_087B10 for a record and, when the flag it
   reports is set, stamps the record with the caller's argument and a one. */
typedef struct {
    float f_00;
    int f_04;
} Ret;

extern Ret *func_087B10(int *a0, void *a1, int a2);

void func_0E58B8(void *a0, void *a1)
{
    int flag;
    Ret *r = func_087B10(&flag, a0, 1);

    if (flag) {
        r->f_04 = (int)a1;
        r->f_00 = 1.0f;
    }
}
