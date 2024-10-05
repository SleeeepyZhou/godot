/* test.cpp */

#include "test.h"

void TestNode::_bind_methods() {
	ClassDB::bind_method(D_METHOD("add"), &TestNode::add);
}

TestNode::TestNode() {
	print_line("Test created");
	count = 0;
}

TestNode::~TestNode() {
	print_line("Test destroyed");
}

void TestNode::add(int p_value) {
	count += p_value;
}

void TestNode::reset() {
	count = 0;
}

int TestNode::get_total() const {
	return count;
}

void TestNode::_bind_methods() {
	ClassDB::bind_method(D_METHOD("add", "value"), &Summator::add);
	ClassDB::bind_method(D_METHOD("reset"), &Summator::reset);
	ClassDB::bind_method(D_METHOD("get_total"), &Summator::get_total);
}
