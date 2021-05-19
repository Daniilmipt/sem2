StrangeMatrix transpose(StrangeMatrix m){
    StrangeMatrix c;

    c.first_line[1] = m.first_line[1];
    c.first_line[2] = m.second_line[1];
    c.first_line[3] = m.third_line[1];

    c.second_line[1] = m.first_line[2];
    c.second_line[2] = m.second_line[2];
    c.second_line[3] = m.third_line[2];

    c.third_line[1] = m.first_line[3];
    c.third_line[2] = m.second_line[3];
    c.third_line[3] = m.third_line[3];

    return c;

}



