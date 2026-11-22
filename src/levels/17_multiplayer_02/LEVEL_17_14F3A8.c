/* LEVEL_17:0x14F3A8 -- message handler: for each pending flag bit of the block that targets the sender's player, queues the matching notification text for that player; the last bit forwards to the follow-up handler. */
typedef struct Player {
    char pad_00[0xF4];
    int slot_F4;
} Player;

typedef struct Block {
    Player *player_00;
    char pad_04[0x40 - 4];
    unsigned int flags_40;
} Block;

typedef struct Msg {
    Player *player_00;
} Msg;

typedef struct Obj {
    char pad_00[0x58];
    Block *blk_58;
} Obj;

extern char D_001C6CA8[];
extern char D_001C6CC0[];
extern char D_001C6CD8[];
extern void func_0A1660(int slot, char *text, int id, unsigned int mask);
extern void func_14EEB0(Obj *o, Msg *m);

void func_14F3A8(Obj *o, Msg *m)
{
    Block *b;

    b = o->blk_58;
    if (b->flags_40 != 0) {
        if ((b->flags_40 & 4) != 0 && b->player_00 == m->player_00)
            func_0A1660(b->player_00->slot_F4 - 1, D_001C6CA8, -0x68, 0xFFFFFFFF);
        if ((b->flags_40 & 8) != 0 && b->player_00 == m->player_00)
            func_0A1660(b->player_00->slot_F4 - 1, D_001C6CC0, -0x67, 0xFFFFFFFF);
        if ((b->flags_40 & 1) != 0 && b->player_00 == m->player_00)
            func_0A1660(b->player_00->slot_F4 - 1, D_001C6CD8, -0x66, 0xFFFFFFFF);
        if ((b->flags_40 & 2) != 0)
            func_14EEB0(o, m);
    }
}
