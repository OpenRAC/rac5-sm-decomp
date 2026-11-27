/* LEVEL_05:0x1AF7F0 -- placement copy of LEVEL_01_1B3468.c: stores a field of the object, then publishes the entries found by two keyed table searches into two globals. */
typedef struct { char pad00[0x24]; unsigned int id; char pad28[0x1C]; } Ent;
typedef struct { char pad00[0x34]; Ent *ents; unsigned int count; } Tab;
typedef struct { char pad00[0x0C]; int w0C; } Obj;
extern Tab *D_001F5E10;
extern int D_001F7E70[1];
extern Ent *D_001F7E74[1];
extern Ent *D_001F7E78;

void func_1AF7F0(Obj *o)
{
    Ent *r;
    unsigned int i;

    D_001F7E70[0] = o->w0C;
    {
        unsigned int key = 0xB2C32519u;
        Tab *t = D_001F5E10;
        for (i = 0; i < t->count; i++) {
            if (t->ents[i].id == key) {
                r = &t->ents[i];
                goto first;
            }
        }
    }
    r = 0;
first:
    D_001F7E74[0] = r;
    {
        unsigned int key = 0xCBD958AFu;
        Tab *t = D_001F5E10;
        for (i = 0; i < t->count; i++) {
            if (t->ents[i].id == key) {
                r = &t->ents[i];
                goto second;
            }
        }
    }
    r = 0;
second:
    D_001F7E78 = r;
}
