static void femul(uint32_t out[15], const uint32_t in1[15], const uint32_t in2[15]) {
  { const uint32_t x30 = in1[14];
  { const uint32_t x31 = in1[13];
  { const uint32_t x29 = in1[12];
  { const uint32_t x27 = in1[11];
  { const uint32_t x25 = in1[10];
  { const uint32_t x23 = in1[9];
  { const uint32_t x21 = in1[8];
  { const uint32_t x19 = in1[7];
  { const uint32_t x17 = in1[6];
  { const uint32_t x15 = in1[5];
  { const uint32_t x13 = in1[4];
  { const uint32_t x11 = in1[3];
  { const uint32_t x9 = in1[2];
  { const uint32_t x7 = in1[1];
  { const uint32_t x5 = in1[0];
  { const uint32_t x58 = in2[14];
  { const uint32_t x59 = in2[13];
  { const uint32_t x57 = in2[12];
  { const uint32_t x55 = in2[11];
  { const uint32_t x53 = in2[10];
  { const uint32_t x51 = in2[9];
  { const uint32_t x49 = in2[8];
  { const uint32_t x47 = in2[7];
  { const uint32_t x45 = in2[6];
  { const uint32_t x43 = in2[5];
  { const uint32_t x41 = in2[4];
  { const uint32_t x39 = in2[3];
  { const uint32_t x37 = in2[2];
  { const uint32_t x35 = in2[1];
  { const uint32_t x33 = in2[0];
  { uint64_t x60 = (((uint64_t)x5 * x58) + (((uint64_t)x7 * x59) + (((uint64_t)x9 * x57) + (((uint64_t)x11 * x55) + (((uint64_t)x13 * x53) + (((uint64_t)x15 * x51) + (((uint64_t)x17 * x49) + (((uint64_t)x19 * x47) + (((uint64_t)x21 * x45) + (((uint64_t)x23 * x43) + (((uint64_t)x25 * x41) + (((uint64_t)x27 * x39) + (((uint64_t)x29 * x37) + (((uint64_t)x31 * x35) + ((uint64_t)x30 * x33)))))))))))))));
  { uint64_t x61 = ((((uint64_t)x5 * x59) + (((uint64_t)x7 * x57) + (((uint64_t)x9 * x55) + (((uint64_t)x11 * x53) + (((uint64_t)x13 * x51) + (((uint64_t)x15 * x49) + (((uint64_t)x17 * x47) + (((uint64_t)x19 * x45) + (((uint64_t)x21 * x43) + (((uint64_t)x23 * x41) + (((uint64_t)x25 * x39) + (((uint64_t)x27 * x37) + (((uint64_t)x29 * x35) + ((uint64_t)x31 * x33)))))))))))))) + (0x15 * (0x2 * ((uint64_t)x30 * x58))));
  { uint64_t x62 = ((((uint64_t)x5 * x57) + (((uint64_t)x7 * x55) + (((uint64_t)x9 * x53) + (((uint64_t)x11 * x51) + (((uint64_t)x13 * x49) + (((uint64_t)x15 * x47) + (((uint64_t)x17 * x45) + (((uint64_t)x19 * x43) + (((uint64_t)x21 * x41) + (((uint64_t)x23 * x39) + (((uint64_t)x25 * x37) + (((uint64_t)x27 * x35) + ((uint64_t)x29 * x33))))))))))))) + (0x15 * ((0x2 * ((uint64_t)x31 * x58)) + (0x2 * ((uint64_t)x30 * x59)))));
  { uint64_t x63 = ((((uint64_t)x5 * x55) + (((uint64_t)x7 * x53) + (((uint64_t)x9 * x51) + (((uint64_t)x11 * x49) + (((uint64_t)x13 * x47) + (((uint64_t)x15 * x45) + (((uint64_t)x17 * x43) + (((uint64_t)x19 * x41) + (((uint64_t)x21 * x39) + (((uint64_t)x23 * x37) + (((uint64_t)x25 * x35) + ((uint64_t)x27 * x33)))))))))))) + (0x15 * ((0x2 * ((uint64_t)x29 * x58)) + ((0x2 * ((uint64_t)x31 * x59)) + (0x2 * ((uint64_t)x30 * x57))))));
  { uint64_t x64 = ((((uint64_t)x5 * x53) + (((uint64_t)x7 * x51) + (((uint64_t)x9 * x49) + (((uint64_t)x11 * x47) + (((uint64_t)x13 * x45) + (((uint64_t)x15 * x43) + (((uint64_t)x17 * x41) + (((uint64_t)x19 * x39) + (((uint64_t)x21 * x37) + (((uint64_t)x23 * x35) + ((uint64_t)x25 * x33))))))))))) + (0x15 * ((0x2 * ((uint64_t)x27 * x58)) + ((0x2 * ((uint64_t)x29 * x59)) + ((0x2 * ((uint64_t)x31 * x57)) + (0x2 * ((uint64_t)x30 * x55)))))));
  { uint64_t x65 = ((((uint64_t)x5 * x51) + (((uint64_t)x7 * x49) + (((uint64_t)x9 * x47) + (((uint64_t)x11 * x45) + (((uint64_t)x13 * x43) + (((uint64_t)x15 * x41) + (((uint64_t)x17 * x39) + (((uint64_t)x19 * x37) + (((uint64_t)x21 * x35) + ((uint64_t)x23 * x33)))))))))) + (0x15 * ((0x2 * ((uint64_t)x25 * x58)) + ((0x2 * ((uint64_t)x27 * x59)) + ((0x2 * ((uint64_t)x29 * x57)) + ((0x2 * ((uint64_t)x31 * x55)) + (0x2 * ((uint64_t)x30 * x53))))))));
  { uint64_t x66 = ((((uint64_t)x5 * x49) + (((uint64_t)x7 * x47) + (((uint64_t)x9 * x45) + (((uint64_t)x11 * x43) + (((uint64_t)x13 * x41) + (((uint64_t)x15 * x39) + (((uint64_t)x17 * x37) + (((uint64_t)x19 * x35) + ((uint64_t)x21 * x33))))))))) + (0x15 * ((0x2 * ((uint64_t)x23 * x58)) + ((0x2 * ((uint64_t)x25 * x59)) + ((0x2 * ((uint64_t)x27 * x57)) + ((0x2 * ((uint64_t)x29 * x55)) + ((0x2 * ((uint64_t)x31 * x53)) + (0x2 * ((uint64_t)x30 * x51)))))))));
  { uint64_t x67 = ((((uint64_t)x5 * x47) + (((uint64_t)x7 * x45) + (((uint64_t)x9 * x43) + (((uint64_t)x11 * x41) + (((uint64_t)x13 * x39) + (((uint64_t)x15 * x37) + (((uint64_t)x17 * x35) + ((uint64_t)x19 * x33)))))))) + (0x15 * ((0x2 * ((uint64_t)x21 * x58)) + ((0x2 * ((uint64_t)x23 * x59)) + ((0x2 * ((uint64_t)x25 * x57)) + ((0x2 * ((uint64_t)x27 * x55)) + ((0x2 * ((uint64_t)x29 * x53)) + ((0x2 * ((uint64_t)x31 * x51)) + (0x2 * ((uint64_t)x30 * x49))))))))));
  { uint64_t x68 = ((((uint64_t)x5 * x45) + (((uint64_t)x7 * x43) + (((uint64_t)x9 * x41) + (((uint64_t)x11 * x39) + (((uint64_t)x13 * x37) + (((uint64_t)x15 * x35) + ((uint64_t)x17 * x33))))))) + (0x15 * ((0x2 * ((uint64_t)x19 * x58)) + ((0x2 * ((uint64_t)x21 * x59)) + ((0x2 * ((uint64_t)x23 * x57)) + ((0x2 * ((uint64_t)x25 * x55)) + ((0x2 * ((uint64_t)x27 * x53)) + ((0x2 * ((uint64_t)x29 * x51)) + ((0x2 * ((uint64_t)x31 * x49)) + (0x2 * ((uint64_t)x30 * x47)))))))))));
  { uint64_t x69 = ((((uint64_t)x5 * x43) + (((uint64_t)x7 * x41) + (((uint64_t)x9 * x39) + (((uint64_t)x11 * x37) + (((uint64_t)x13 * x35) + ((uint64_t)x15 * x33)))))) + (0x15 * ((0x2 * ((uint64_t)x17 * x58)) + ((0x2 * ((uint64_t)x19 * x59)) + ((0x2 * ((uint64_t)x21 * x57)) + ((0x2 * ((uint64_t)x23 * x55)) + ((0x2 * ((uint64_t)x25 * x53)) + ((0x2 * ((uint64_t)x27 * x51)) + ((0x2 * ((uint64_t)x29 * x49)) + ((0x2 * ((uint64_t)x31 * x47)) + (0x2 * ((uint64_t)x30 * x45))))))))))));
  { ℤ x70 = ((((uint64_t)x5 * x41) + (((uint64_t)x7 * x39) + (((uint64_t)x9 * x37) + (((uint64_t)x11 * x35) + ((uint64_t)x13 * x33))))) +ℤ (0x15 *ℤ ((0x2 * ((uint64_t)x15 * x58)) + ((0x2 * ((uint64_t)x17 * x59)) + ((0x2 * ((uint64_t)x19 * x57)) + ((0x2 * ((uint64_t)x21 * x55)) + ((0x2 * ((uint64_t)x23 * x53)) + ((0x2 * ((uint64_t)x25 * x51)) + ((0x2 * ((uint64_t)x27 * x49)) + ((0x2 * ((uint64_t)x29 * x47)) + ((0x2 * ((uint64_t)x31 * x45)) + (0x2 * ((uint64_t)x30 * x43)))))))))))));
  { ℤ x71 = ((((uint64_t)x5 * x39) + (((uint64_t)x7 * x37) + (((uint64_t)x9 * x35) + ((uint64_t)x11 * x33)))) +ℤ (0x15 *ℤ ((0x2 * ((uint64_t)x13 * x58)) + ((0x2 * ((uint64_t)x15 * x59)) + ((0x2 * ((uint64_t)x17 * x57)) + ((0x2 * ((uint64_t)x19 * x55)) + ((0x2 * ((uint64_t)x21 * x53)) + ((0x2 * ((uint64_t)x23 * x51)) + ((0x2 * ((uint64_t)x25 * x49)) + ((0x2 * ((uint64_t)x27 * x47)) + ((0x2 * ((uint64_t)x29 * x45)) + ((0x2 * ((uint64_t)x31 * x43)) + (0x2 * ((uint64_t)x30 * x41))))))))))))));
  { ℤ x72 = ((((uint64_t)x5 * x37) + (((uint64_t)x7 * x35) + ((uint64_t)x9 * x33))) +ℤ (0x15 *ℤ ((0x2 * ((uint64_t)x11 * x58)) + ((0x2 * ((uint64_t)x13 * x59)) + ((0x2 * ((uint64_t)x15 * x57)) + ((0x2 * ((uint64_t)x17 * x55)) + ((0x2 * ((uint64_t)x19 * x53)) + ((0x2 * ((uint64_t)x21 * x51)) + ((0x2 * ((uint64_t)x23 * x49)) + ((0x2 * ((uint64_t)x25 * x47)) + ((0x2 * ((uint64_t)x27 * x45)) + ((0x2 * ((uint64_t)x29 * x43)) + ((0x2 * ((uint64_t)x31 * x41)) + (0x2 * ((uint64_t)x30 * x39)))))))))))))));
  { ℤ x73 = ((((uint64_t)x5 * x35) + ((uint64_t)x7 * x33)) +ℤ (0x15 *ℤ ((0x2 * ((uint64_t)x9 * x58)) + ((0x2 * ((uint64_t)x11 * x59)) + ((0x2 * ((uint64_t)x13 * x57)) + ((0x2 * ((uint64_t)x15 * x55)) + ((0x2 * ((uint64_t)x17 * x53)) + ((0x2 * ((uint64_t)x19 * x51)) + ((0x2 * ((uint64_t)x21 * x49)) + ((0x2 * ((uint64_t)x23 * x47)) + ((0x2 * ((uint64_t)x25 * x45)) + ((0x2 * ((uint64_t)x27 * x43)) + ((0x2 * ((uint64_t)x29 * x41)) + ((0x2 * ((uint64_t)x31 * x39)) + (0x2 * ((uint64_t)x30 * x37))))))))))))))));
  { ℤ x74 = (((uint64_t)x5 * x33) +ℤ (0x15 *ℤ ((0x2 * ((uint64_t)x7 * x58)) + ((0x2 * ((uint64_t)x9 * x59)) + ((0x2 * ((uint64_t)x11 * x57)) + ((0x2 * ((uint64_t)x13 * x55)) + ((0x2 * ((uint64_t)x15 * x53)) + ((0x2 * ((uint64_t)x17 * x51)) + ((0x2 * ((uint64_t)x19 * x49)) + ((0x2 * ((uint64_t)x21 * x47)) + ((0x2 * ((uint64_t)x23 * x45)) + ((0x2 * ((uint64_t)x25 * x43)) + ((0x2 * ((uint64_t)x27 * x41)) + ((0x2 * ((uint64_t)x29 * x39)) + ((0x2 * ((uint64_t)x31 * x37)) + (0x2 * ((uint64_t)x30 * x35)))))))))))))))));
  { uint64_t x75 = (x74 >> 0x1a);
  { uint32_t x76 = (x74 & 0x3ffffff);
  { ℤ x77 = (x75 +ℤ x73);
  { uint64_t x78 = (x77 >> 0x1a);
  { uint32_t x79 = (x77 & 0x3ffffff);
  { ℤ x80 = (x78 +ℤ x72);
  { uint64_t x81 = (x80 >> 0x1a);
  { uint32_t x82 = (x80 & 0x3ffffff);
  { ℤ x83 = (x81 +ℤ x71);
  { uint64_t x84 = (x83 >> 0x1a);
  { uint32_t x85 = (x83 & 0x3ffffff);
  { ℤ x86 = (x84 +ℤ x70);
  { uint64_t x87 = (x86 >> 0x1a);
  { uint32_t x88 = (x86 & 0x3ffffff);
  { uint64_t x89 = (x87 + x69);
  { uint64_t x90 = (x89 >> 0x1a);
  { uint32_t x91 = ((uint32_t)x89 & 0x3ffffff);
  { uint64_t x92 = (x90 + x68);
  { uint64_t x93 = (x92 >> 0x1a);
  { uint32_t x94 = ((uint32_t)x92 & 0x3ffffff);
  { uint64_t x95 = (x93 + x67);
  { uint64_t x96 = (x95 >> 0x1a);
  { uint32_t x97 = ((uint32_t)x95 & 0x3ffffff);
  { uint64_t x98 = (x96 + x66);
  { uint64_t x99 = (x98 >> 0x1a);
  { uint32_t x100 = ((uint32_t)x98 & 0x3ffffff);
  { uint64_t x101 = (x99 + x65);
  { uint64_t x102 = (x101 >> 0x1a);
  { uint32_t x103 = ((uint32_t)x101 & 0x3ffffff);
  { uint64_t x104 = (x102 + x64);
  { uint64_t x105 = (x104 >> 0x1a);
  { uint32_t x106 = ((uint32_t)x104 & 0x3ffffff);
  { uint64_t x107 = (x105 + x63);
  { uint64_t x108 = (x107 >> 0x1a);
  { uint32_t x109 = ((uint32_t)x107 & 0x3ffffff);
  { uint64_t x110 = (x108 + x62);
  { uint64_t x111 = (x110 >> 0x1a);
  { uint32_t x112 = ((uint32_t)x110 & 0x3ffffff);
  { uint64_t x113 = (x111 + x61);
  { uint64_t x114 = (x113 >> 0x1a);
  { uint32_t x115 = ((uint32_t)x113 & 0x3ffffff);
  { uint64_t x116 = (x114 + x60);
  { uint64_t x117 = (x116 >> 0x19);
  { uint32_t x118 = ((uint32_t)x116 & 0x1ffffff);
  { uint64_t x119 = (x76 + (0x15 * x117));
  { uint32_t x120 = (uint32_t) (x119 >> 0x1a);
  { uint32_t x121 = ((uint32_t)x119 & 0x3ffffff);
  { uint32_t x122 = (x120 + x79);
  { uint32_t x123 = (x122 >> 0x1a);
  { uint32_t x124 = (x122 & 0x3ffffff);
  out[0] = x121;
  out[1] = x124;
  out[2] = (x123 + x82);
  out[3] = x85;
  out[4] = x88;
  out[5] = x91;
  out[6] = x94;
  out[7] = x97;
  out[8] = x100;
  out[9] = x103;
  out[10] = x106;
  out[11] = x109;
  out[12] = x112;
  out[13] = x115;
  out[14] = x118;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
