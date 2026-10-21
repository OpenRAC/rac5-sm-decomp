/* LEVEL_01:0x154C30 -- asks the object manager for a thing and copies one
   of its records into the global, then raises the global's flag. */
typedef struct {
    float f[2];
    int i;
} Record;

typedef struct {
    int pad[28];
    Record rec;
} Thing;

extern Record D_392014;
extern Thing *func_099328(void *owner, void *tag);

void func_154C30(void)
{
    Thing *thing = func_099328(0, 0);
    Record *rec = &D_392014;

    *rec = thing->rec;
    ((char *)rec)[-4] = 1;
}
