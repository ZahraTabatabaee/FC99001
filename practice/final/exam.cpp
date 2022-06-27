#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include"catch.hpp"
#include<string.h>
#include"exam.h"


TEST_CASE( "q0_string_len", "[exam]" ) {
    char pch1[7] = "123456";
    REQUIRE(string_len(pch1) == 6);

    char pch2[6] = "abcd0";
    REQUIRE(string_len(pch2) == 5);

    char pch3[1] = "";
    REQUIRE(string_len(pch3) == 0);

    char pch4[6] = "00000";
    REQUIRE(string_len(pch4) == 5);
}

TEST_CASE( "q1_str_cpy", "[exam]" ) {
    char pch1[7] = "123456";
    char pch1_copy[10];
    str_cpy(pch1, pch1_copy);
    REQUIRE(strcmp(pch1_copy, "123456") == 0);
    pch1[0] = 'a';
    REQUIRE(strcmp(pch1_copy, "123456") == 0);

    char pch2[10] = "aabbccdw";
    char pch2_copy[20];
    str_cpy(pch2, pch2_copy);
    REQUIRE(strcmp(pch2_copy, "aabbccdw") == 0);
    pch2[4] = '1';
    REQUIRE(strcmp(pch2_copy, "aabbccdw") == 0);
}

TEST_CASE( "q2_char_count", "[exam][!hide]" ) {
    int count = char_count("ababa", 'a');
    REQUIRE(count == 3);

    count = char_count("ababa", 'b');
    REQUIRE(count == 2);

    count = char_count("123412340", '1');

    REQUIRE(count == 2);

    count = char_count("123412340", '0');
    REQUIRE(count == 1);

    count = char_count("123412340", 'a');
    REQUIRE(count == 0);
}

TEST_CASE( "q3_longest_char_sequence", "[exam][!hide]" ) {
    int count = longest_char_sequence("abbbbaa", 'a');
    REQUIRE(count == 2);

    count = longest_char_sequence("abbbbaa", 'b');
    REQUIRE(count == 4);

    count = longest_char_sequence("aaaabaa", 'a');
    REQUIRE(count == 4);

    count = longest_char_sequence("aaaababaa", 'a');
    REQUIRE(count == 4);

    count = longest_char_sequence("aaaababaa", 'b');
    REQUIRE(count == 1);

    count = longest_char_sequence("abababababa", 'b');
    REQUIRE(count == 1);
}

TEST_CASE( "q4_count_pattern", "[exam][!hide]" ) {
    int count = count_pattern("aba", "ab");
    REQUIRE(count == 1);

    count = count_pattern("alibcalidefali", "ali");
    REQUIRE(count == 3);

    count = count_pattern("101101", "101");
    REQUIRE(count == 2);

    count = count_pattern("101010101", "101");
    REQUIRE(count == 4);
}

TEST_CASE( "q5_function_pointer", "[exam]" ) {    
    int list1[5] = {1, 3, 2, 5, 4};
    int list2[5] = {1, 2, 0, 2, 0};
    int sub_expected[5] = {0, 1, 2, 3, 4};
    int add_expected[5] = {2, 5, 2, 7, 4};
    int sub_actual[5];
    int add_actual[5];

    apply(5, list1, list2, sub, sub_actual);
    for(int i=0; i<5; i++)
        REQUIRE(sub_actual[i] == sub_expected[i]);

    apply(5, list1, list2, add, add_actual);
    for(int i=0; i<5; i++)
        REQUIRE(add_actual[i] == add_expected[i]);

    int list21[3] = {0, 2, 5};
    int list22[3] = {1, 3, 2};
    int sub_expected2[3] = {-1, -1, 3};
    int add_expected2[3] = {1, 5, 7};
    int sub_actual2[3];
    int add_actual2[3];

    apply(3, list21, list22, sub, sub_actual2);
    for(int i=0; i<3; i++)
        REQUIRE(sub_actual2[i] == sub_expected2[i]);

    apply(3, list21, list22, add, add_actual2);
    for(int i=0; i<3; i++)
        REQUIRE(add_actual2[i] == add_expected2[i]);
}

TEST_CASE( "q6_change_student", "[exam]" ) {
    student s = { "98521121", "Zhila Arghavan"};

    char new_id[10] = "98521122";
    change_student_id(&s, new_id);
    REQUIRE(strcmp(new_id, s.id) == 0);

    char new_name[30] = "Ali Mardani";
    change_student_name(&s, new_name);
    REQUIRE(strcmp(new_name, s.name) == 0);    

    char new_id2[10] = "96000001";
    change_student_id(&s, new_id2);
    REQUIRE(strcmp(new_id2, s.id) == 0);

    char new_name2[30] = "Homa Sarbaz";
    change_student_name(&s, new_name2);
    REQUIRE(strcmp(new_name2, s.name) == 0);
}


TEST_CASE( "q7_student_tostring", "[exam][!hide]" ) {
    student s = { "98521121", "Zhila Arghavan"};
    char* str = student_tostring(&s);
    REQUIRE(strcmp(str, "98521121:Zhila Arghavan") == 0);
    free(str);

    student s2 = { "98522321", "Keykhosro Ghobadi"};
    char* str2 = student_tostring(&s2);
    REQUIRE(strcmp(str2, "98522321:Keykhosro Ghobadi") == 0);
    free(str2);
}

TEST_CASE( "q8_create_student", "[exam][!hide]" ) {
    char id1[9] = "98521121";
    char name1[30] = "Zhila Arghavan";
    student* ps = create_student(id1, name1);
    REQUIRE(strcmp(id1, ps->id) == 0);
    REQUIRE(strcmp(name1, ps->name) == 0);
    free(ps);

    char id2[9] = "98522321";
    char name2[30] = "Keykhosro Ghobadi";
    ps = create_student(id2, name2);
    REQUIRE(strcmp(id2, ps->id) == 0);
    REQUIRE(strcmp(name2, ps->name) == 0);
    free(ps);    
}

// TEST_CASE( "q9_view_memory", "[exam][!hide]" ) {
//     char id1[9] = "98521121";
//     char name1[30] = "Zhila Arghavan";
//     student* ps = create_student(id1, name1);
//     char* ptr1 = get_std_ptr1(ps);
//     char* ptr2 = get_std_ptr2(ps);
//     int w = *ptr1;
//     w <<= 8;
//     w |= *ptr2;
//     REQUIRE( w == 0x316c);
//     free(ps);    

//     char id2[9] = "98522321";
//     char name2[30] = "Keykhosro Ghobadi";
//     ps = create_student(id2, name2);
//     ptr1 = get_std_ptr1(ps);
//     ptr2 = get_std_ptr2(ps);
//     w = *ptr1;
//     w <<= 8;
//     w |= *ptr2;
//     REQUIRE( w == 0x336b);
//     free(ps);    
// }