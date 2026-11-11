/* LEVEL_22:0x07B098 -- placement copy of LEVEL_01_089CB8.c: clears two words in each record of the table owned by the state. */
extern void func_07D618(void);
struct Rec { int a; char pad[0x08]; int b; char pad2[0x60]; };
struct Tab { char pad[8]; char *recs; };
struct Own { char pad[4]; struct Hdr *hdr; char pad2[8]; struct Tab *tab; };
struct Hdr { char pad[0x2f]; unsigned char count; };

void func_07B098(struct Own *state)
{
    int index;
    if (state != 0) {
        if (state->tab == 0)
            func_07D618();
        for (index = 0; index < state->hdr->count; index++) {
            *(int *)(state->tab->recs + index * 0x70 + 12) = 0;
            *(int *)(state->tab->recs + index * 0x70) = 0;
        }
    }
}
