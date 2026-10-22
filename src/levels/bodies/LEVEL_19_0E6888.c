/* LEVEL_19:0x0E6888 -- asks func_088678 for a record and fills it with the
   second argument and 1.0f when the call reports success. */
typedef struct {
    float f_00;
    int f_04;
} Rec;

extern Rec *func_088678(int *flag, void *a0, int a2);

void func_0E6888(void *a0, void *a1)
{
    int flag;
    Rec *r = func_088678(&flag, a0, 1);
    if (flag) {
        r->f_04 = (int)a1;
        r->f_00 = 1.0f;
    }
}
