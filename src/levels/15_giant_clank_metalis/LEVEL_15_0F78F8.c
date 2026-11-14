/* LEVEL_15:0x0F78F8 -- sets the mission timer, selects the entry by the current mode (15 -> 0, 21 -> 1) and points the record at that table entry. */
typedef struct { char bytes[44]; } Entry;
typedef struct { char pad[0x44168]; int selected; Entry *record; int timer; } Global;
extern int D_0016EF70;
extern Entry D_0016F230[];
extern Global D_002A8B58;

void func_0F78F8(void)
{
    D_002A8B58.timer = 1000000;
    switch (D_0016EF70) {
    case 15:
        D_002A8B58.selected = 0;
        break;
    case 21:
        D_002A8B58.selected = 1;
        break;
    }
    D_002A8B58.record = &D_0016F230[D_002A8B58.selected];
}
