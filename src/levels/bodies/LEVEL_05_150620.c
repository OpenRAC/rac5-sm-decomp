/* LEVEL_05:0x150620 -- asks the object manager for a thing and copies one
   of its records into the global, then raises the global's flag. */
typedef struct {
    float f[2];
    int i;
} Record;

typedef struct {
    int pad[28];
    Record rec;
} Thing;

extern Record D_37DED4;
extern Thing *func_096988(void *owner, void *tag);

void func_150620(void)
{
    Thing *thing = func_096988(0, 0);
    Record *rec = &D_37DED4;

    *rec = thing->rec;
    ((char *)rec)[-4] = 1;
}
