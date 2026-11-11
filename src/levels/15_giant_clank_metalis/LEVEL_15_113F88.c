/* Candidate for LEVEL_15.REL:0x113F88.
 * Packs four palette-selected fields into an output record.
 */
typedef unsigned int u32;
extern u32 D_001AFE00[];

void func_113F88(u32 *output, const int *input)
{
    u32 second_color = D_001AFE00[input[3]];
    u32 third_color = D_001AFE00[input[5]];
    u32 last_value;
    u32 last_color = D_001AFE00[input[7]];

    output[0] = ((u32)input[2] & 0xF800FFFFu)
              | (D_001AFE00[input[1]] << 16);
    output[1] = ((u32)input[4] & 0xF800FFFFu)
              | (second_color << 16);
    output[2] = ((u32)input[6] & 0xF800FFFFu)
              | (third_color << 16);
    if (input[8] != 0)
        last_value = ((u32)input[8] & 0xF800FFFFu)
                   | (last_color << 16);
    else
        last_value = 0;
    output[3] = last_value;
}


