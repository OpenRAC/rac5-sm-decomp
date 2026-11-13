/* LEVEL_08:0x17CA08 -- placement copy of LEVEL_04_171660.c. */
/* Release the active linked entry after the base transition finishes. */
typedef struct Object { unsigned char pad[0x45]; unsigned char state; unsigned char pad2[0x58-0x46]; unsigned char *data; unsigned char pad3[0x70-0x5c]; float timer; } Object;
extern void func_21CFF0(Object *, int);
extern void func_0845F8(char *, int);
extern void func_084758(char *);
extern void func_07C9C8(unsigned char *);
void func_17CA08(Object *object, int transitioning)
{
    unsigned char *data;
    func_21CFF0(object, transitioning);
    data=object->data;
    if (!transitioning) {
        if (object->state==2) {
            char *item=*(char **)(data+0x60);
            func_0845F8(item,1);
            if (*(unsigned int *)(item+0x64)&6) func_084758(item);
            *(char **)(data+0x60)=0;
        } else if (object->state==3) {
            char *item=*(char **)(data+0x64);
            func_0845F8(item,1);
            if (*(unsigned int *)(item+0x64)&6) func_084758(item);
            *(char **)(data+0x64)=0;
        }
        object->state=0;
        object->timer=150.0f;
        func_07C9C8(data);
    }
}
