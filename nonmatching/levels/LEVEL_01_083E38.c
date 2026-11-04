/* Candidate for the LEVEL_01.REL:0x083E38 body.
 * It configures rendering, visits variable-length items, draws each eligible
 * item and retains up to sixteen nearby items. Field meanings are provisional.
 */

typedef struct { float x, y, z; } Vec3;
typedef struct { float m[16]; } Mat4;
typedef struct { Vec3 position; float radius; } TransformResult;

typedef struct {
    unsigned char pad0[0xC];
    float distance_scale;
    unsigned char pad1[0xE0 - 0x10];
    float x;
    float y;
    float z;
    float w;
} Frame;

typedef struct {
    unsigned char pad0[0x1C];
    Frame *frame;
} Session;

typedef struct {
    Mat4 transform;
    unsigned char pad0[4];
    float size;
    float reach;
    unsigned char pad2[4];
    float extra_reach;
    unsigned char pad3[8];
    int resource;
    unsigned char category;
    unsigned char flags;
    unsigned char kind;
    unsigned char shift;
    unsigned char payload[0];
} Item;

typedef struct {
    int unknown0;
    int id;
    unsigned char pad[8];
    Item *items;
    unsigned int count;
} Entry;

typedef struct {
    unsigned char pad[0x24];
    Entry *entries;
    unsigned int count;
} Manager;

typedef struct {
    Item *item;
    Session *session;
    unsigned int mask;
    float reciprocal;
} NearbyEntry;

extern Manager *D_00206D90;
extern unsigned int D_001F622C;
extern Vec3 D_001F62C8;
extern NearbyEntry D_0023ADC0[16];

extern void func_0A0908(int);
extern void func_0A0A80(int, int);
extern void func_0A0A88(int, int);
extern void func_0A0A90(int, int);
extern void func_0A0AA0(float, float);
extern Session *func_085290(void);
extern void func_125E78(Vec3 *, Mat4 *, Vec3 *);
extern int func_07B460(TransformResult *);
extern void func_08CD00(int);
extern void *func_08CEA0(TransformResult *, int, unsigned char, void *);
extern void func_0852C0(float, Item *, Session *, int, unsigned int,
                        unsigned int, int, int, int, int, int, int,
                        unsigned int, void *, int);

void func_083E38(Vec3 *viewer, unsigned int category_mask)
{
    Vec3 source;
    TransformResult transformed;
    Manager *manager;
    Entry *entry;
    Session *session;
    Frame *frame;
    Item *item;
    void *drawable;
    unsigned int entry_index;
    unsigned int item_index;
    unsigned int item_mask;
    unsigned char within;
    int visible;
    unsigned int color;
    float dx, dy, dz, distance2, reach;
    float cx, cy, cz, nearby_radius;

    manager = D_00206D90;
    if (manager == 0)
        return;

    D_001F622C = 0;
    func_0A0908(5);
    func_0A0908(9);
    func_0A0A80(1, 1);
    func_0A0A88(0, 1);
    func_0A0A90(0, 0);
    func_0A0AA0(16.0f, 16.0f);
    func_0A0908(1);

    if (D_00206D90->count != 0) {
        color = 0x00FFFFFF;
        entry_index = 0;
        do {
            entry = &D_00206D90->entries[entry_index++];
            if (entry->id == -1)
                continue;
            session = func_085290();
            item = entry->items;
            frame = session->frame;
            for (item_index = 0; item_index < entry->count; ++item_index) {
                if ((item->flags & 1) != 0 && ((1U << item->category) & category_mask) != 0) {
                    source.x = frame->x * 0.01f;
                    source.y = frame->y * 0.01f;
                    source.z = frame->z * 0.01f;
                    transformed.radius = frame->w * 0.01f * item->size;
                    func_125E78(&transformed.position, &item->transform, &source);
                    visible = func_07B460(&transformed);
                    if (visible) {
                        func_08CD00(item->resource);
                        drawable = func_08CEA0(&transformed, 1, item->kind, item->payload);
                        dx = item->transform.m[12] - viewer->x;
                        dy = item->transform.m[13] - viewer->y;
                        dz = item->transform.m[14] - viewer->z;
                        distance2 = dx * dx + dy * dy + dz * dz;
                        reach = item->reach * 3.0f + item->extra_reach;
                        item_mask = (unsigned int)item->shift << ((item->flags & 0x30) >> 1);
                        if (reach * reach <= distance2) {
                            func_0852C0(item->size, item, session, 1, item_mask,
                                        color | 0xFF000000, 0, 1,
                                        (item->flags >> 2) & 1, visible,
                                        0, 0, 0xFFCCAA00, drawable, 0);
                        } else {
                            func_0852C0(item->size, item, session, 0, item_mask,
                                        color | 0xFF000000, 0, 1,
                                        (item->flags >> 2) & 1, visible,
                                        0, 0, 0xFFCCAA00, drawable, 0);
                            cx = transformed.position.x - D_001F62C8.x;
                            cy = transformed.position.y - D_001F62C8.y;
                            cz = transformed.position.z - D_001F62C8.z;
                            nearby_radius = transformed.radius + 1.0f;
                            within = cx * cx + cy * cy + cz * cz < nearby_radius * nearby_radius;
                            if (within && D_001F622C < 16) {
                                unsigned int n = D_001F622C;
                                D_0023ADC0[n].item = item;
                                D_0023ADC0[n].session = session;
                                D_0023ADC0[n].mask = item_mask;
                                D_001F622C = n + 1;
                                D_0023ADC0[n].reciprocal =
                                    1.0f / (frame->distance_scale * 0.01f * item->size);
                            }
                        }
                    }
                }
                item = (Item *)((char *)item + 0x64 + (unsigned int)item->kind * 8);
            }
        } while (entry_index < D_00206D90->count);
    }
}
