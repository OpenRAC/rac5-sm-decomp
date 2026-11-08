/* LEVEL_02.REL:0x0A62B8: reviewed 128-byte candidate.
 * pinned C with gnu-ee-trial links 120 bytes; first differs at +12.
 * Retry: Recover the list sentinel's global-base materialization and callback-loop
 * branch layout without artificial instructions.
 * No matching credit.
 */
typedef struct Element Element;

typedef struct Metadata {
    char pad_00[0x14];
    void (*callback)(Element *);
} Metadata;

struct Element {
    char pad_00[4];
    Element *next;
    char pad_08[0x0C];
    Metadata *metadata;
    int active;
};

typedef struct ListHead {
    char pad_00[0x1C];
    Element sentinel;
} ListHead;

extern ListHead D_002B3B50;
extern void func_0A61B0(Element *);
extern Element *func_0A6188(Element *);

void func_0A62B8(void)
{
    Element *sentinel = &D_002B3B50.sentinel;
    Element *element = D_002B3B50.sentinel.next;

    while (element != sentinel) {
        if (element->metadata->callback != 0) {
            element->metadata->callback(element);
            func_0A61B0(element);
        }
        if (element->active == 0)
            element = func_0A6188(element);
        else
            element = element->next;
    }
}
