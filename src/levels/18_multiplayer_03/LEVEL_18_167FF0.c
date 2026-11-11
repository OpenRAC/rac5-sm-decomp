/* LEVEL_18:0x167FF0 -- placement copy of LEVEL_17_15B980.c: finds the managed element whose info record carries
   the id, or returns null. */
typedef struct { int id; } Info;
typedef struct { char pad[0x58]; Info *info; char pad5c[0x24]; } Element;
typedef struct { char pad[0xC]; Element *elements; char pad10[0x20]; int count; } Manager;
extern Manager *D_001BF574;

Element *func_167FF0(int id)
{
    Manager *manager = D_001BF574;
    Element *end = manager->elements + manager->count;
    Element *element;

    for (element = manager->elements; element != end; element++)
        if (element->info->id == id)
            return element;
    return 0;
}
