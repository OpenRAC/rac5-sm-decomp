/*
 * USA boot candidate at 0x01E92AB0; anonymous body extent 140 bytes.
 * This C body compared exactly in a local SN link using reconstructed GNU
 * pinned and gnu-ee-trial compilers with -O2 -G0. Those tools are not a
 * qualified project toolchain; this is not an accepted match. The current
 * gate rejects anonymous bodies followed by a zero word. Reopen when
 * the gate supports a reviewed anonymous extent and preserves its trailing
 * word, without weakening boundary checks. Promotion requires the qualified
 * complete boot gate and semantic boundary review.
 *
 * The body clears and initializes the observed fields of a positional record.
 */
typedef struct {
    float x;
    float y;
    float z;
} VEC3;

typedef struct SND_Positional {
    int state;
    void *sound;
    int result;
    char _pad0C[0x04];
    struct SND_Positional **link;
    float field14;
    float field18;
    unsigned char field1C;
    unsigned char field1D;
    unsigned char field1E;
    unsigned char field1F;
    unsigned char has_position;
    unsigned char field21;
    unsigned char field22;
    char _pad23;
    VEC3 position;
    int field30;
    float field34;
    int field38;
    float field3C;
    float field40;
    float field44;
    float field48;
    int field4C;
    int field50;
    unsigned char field54;
    char _pad55[0x03];
} SND_Positional;

void func_1E92AB0(SND_Positional *sound)
{
    sound->state = 0;
    sound->sound = 0;
    sound->result = 0;
    sound->field1F = 0;
    sound->field1C = 0;
    sound->link = 0;
    sound->field14 = 1.0f;
    sound->field18 = 1.0f;
    sound->has_position = 0;
    sound->field21 = 0;
    sound->field22 = 0;
    sound->position.x = 0.0f;
    sound->position.y = 0.0f;
    sound->position.z = 0.0f;
    sound->field30 = 0;
    sound->field34 = -1.0f;
    sound->field38 = 0;
    sound->field3C = 5.0f;
    sound->field40 = 15.0f;
    sound->field44 = 1.0f;
    sound->field48 = 0.5f;
    sound->field4C = 0;
    sound->field50 = 0;
    sound->field54 = 0;
}
