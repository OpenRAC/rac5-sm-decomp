/* LEVEL_10:0x153738 -- placement copy of LEVEL_07_157F58.c: asks the object manager for a thing and copies one
   of its records into the global, then raises the global's flag. */
typedef struct {
    float f[2];
    int i;
} Record;

typedef struct {
    int pad[28];
    Record rec;
} Thing;

extern Record D_39B414;
extern int func_0997F0(int a, int b);

void func_153738(void)
{
    Thing *thing = (Thing *)func_0997F0(0, 0);
    Record *rec = &D_39B414;

    *rec = thing->rec;
    ((char *)rec)[-4] = 1;
}
