/* LEVEL_07:0x1981C0 -- finds the managed entity whose info carries the id. */
typedef struct {
    int id;
} Info;

typedef struct {
    char pad[0x54];
    Info *info;
    char pad58[0x28];
} Ent;

typedef struct {
    char pad[0xC];
    Ent *ents;
    char pad10[0x20];
    int count;
} Mgr;

extern Mgr *D_0021CF9C;

Ent *func_1981C0(int id)
{
    Mgr *mgr = D_0021CF9C;
    Ent *ent = mgr->ents;
    Ent *end = ent + mgr->count;

    for (; ent != end; ent++) {
        if (ent->info->id == id)
            return ent;
    }
    return 0;
}
