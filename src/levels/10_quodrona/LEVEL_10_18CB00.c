/* LEVEL_10:0x18CB00 -- counts the object's timer down by one and, once it runs out, starts the table effect, the record's vector effect, the sound mask and the follow-up action. */
typedef struct {
    float *vec;
} Rec;

typedef struct {
    char pad00[0x54];
    Rec *rec;
    char pad58[0x18];
    float timer;
} Obj;

extern char D_00002DB8[];
extern void func_000E18(int index, int first, int second);
extern void func_003668(float *vec, void *a1, void *a2, float f);
extern void func_07CCA0(void *p, int a1);
extern void func_088150(unsigned int value);

void func_18CB00(Obj *o)
{
    o->timer = o->timer - 1.0f;
    if (o->timer <= 0.0f) {
        func_000E18(0, (int)D_00002DB8, 0);
        func_003668(o->rec->vec + 8, 0, (void *)3, 1.0f);
        func_088150(2);
        func_07CCA0(o, 1);
    }
}
