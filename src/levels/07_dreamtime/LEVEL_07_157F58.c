/* LEVEL_07:0x157F58 -- asks the object manager for a thing and copies one
   of its records into the global, then raises the global's flag. */
typedef struct {
    float f[2];
    int i;
} Record;

typedef struct {
    int pad[28];
    Record rec;
} Thing;

extern Record D_3A7924;
extern Thing *func_09B308(void *owner, void *tag);

void func_157F58(void)
{
    Thing *thing = func_09B308(0, 0);
    Record *rec = &D_3A7924;

    *rec = thing->rec;
    ((char *)rec)[-4] = 1;
}
