/* LEVEL_03:0x1C8558 -- placement copy of LEVEL_01_1B3468.c: stores a field of the object, then publishes the entries found by two keyed table searches into two globals. */
typedef struct { char pad00[0x24]; unsigned int id; char pad28[0x1C]; } Ent;
typedef struct { char pad00[0x34]; Ent *ents; unsigned int count; } Tab;
typedef struct { char pad00[0x0C]; int w0C; } Obj;
extern Tab *D_0021F410;
extern int D_00221D90[1];
extern Ent *D_00221D94[1];
extern Ent *D_00221D98;

void func_1C8558(Obj *o)
{
    Ent *r;
    unsigned int i;

    D_00221D90[0] = o->w0C;
    {
        unsigned int key = 0xB2C32519u;
        Tab *t = D_0021F410;
        for (i = 0; i < t->count; i++) {
            if (t->ents[i].id == key) {
                r = &t->ents[i];
                goto first;
            }
        }
    }
    r = 0;
first:
    D_00221D94[0] = r;
    {
        unsigned int key = 0xCBD958AFu;
        Tab *t = D_0021F410;
        for (i = 0; i < t->count; i++) {
            if (t->ents[i].id == key) {
                r = &t->ents[i];
                goto second;
            }
        }
    }
    r = 0;
second:
    D_00221D98 = r;
}
