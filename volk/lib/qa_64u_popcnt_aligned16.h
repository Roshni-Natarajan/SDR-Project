#ifndef INCLUDED_QA_64U_POPCNT_ALIGNED16_H
#define INCLUDED_QA_64U_POPCNT_ALIGNED16_H

#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/TestCase.h>

class qa_64u_popcnt_aligned16 : public CppUnit::TestCase {

  CPPUNIT_TEST_SUITE (qa_64u_popcnt_aligned16);
  CPPUNIT_TEST (t1);
  CPPUNIT_TEST_SUITE_END ();

 private:
  void t1 ();
};


#endif /* INCLUDED_QA_64U_POPCNT_ALIGNED16_H */
