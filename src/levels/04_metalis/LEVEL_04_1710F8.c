/* LEVEL_04:0x1710F8 -- releases the active linked entry after the base transition finishes; the first kind also releases the entry's attached sub-entry. */
typedef struct Object { unsigned char pad[0x45]; unsigned char state; unsigned char pad2[0x58-0x46]; unsigned char *data; unsigned char pad3[0x70-0x5c]; float timer; } Object;
extern void func_1F2C80(Object *, int);
extern void func_07FAE8(char *, int);
extern void func_07FC48(char *);
extern void func_077E48(unsigned char *);
void func_1710F8(Object *object, int transitioning)
{
    unsigned char *data;
    func_1F2C80(object, transitioning);
    data=object->data;
    if (!transitioning) {
        if (object->state==2) {
            char *item=*(char **)(data+0x60);
            char *sub=*(char **)(*(char **)(item+0x58)+0x18);
            func_07FAE8(sub,1);
            if (*(unsigned int *)(sub+0x64)&6) func_07FC48(sub);
            func_07FAE8(item,1);
            if (*(unsigned int *)(item+0x64)&6) func_07FC48(item);
            *(char **)(data+0x60)=0;
        } else if (object->state==3) {
            char *item=*(char **)(data+0x64);
            func_07FAE8(item,1);
            if (*(unsigned int *)(item+0x64)&6) func_07FC48(item);
            *(char **)(data+0x64)=0;
        }
        object->state=0;
        object->timer=300.0f;
        func_077E48(data);
    }
}
