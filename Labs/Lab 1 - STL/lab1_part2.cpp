#include <iostream>
#include <list>
#include <string>

using namespace std;

void addCourses(list<string>& courses){
  courses.push_front("CS 250");
  courses.push_front("CS 200");
  courses.push_front("CS 210");
  courses.push_front("CS 235");
  courses.push_front("CS 134");
  courses.push_front("CS 211");
}

void sortList(list<string>& courses) {
  courses.sort();
}

void reverseList(list<string>& courses) {
  courses.reverse();
}

void displayCourses(list<string>& courses) {
  int counter = 0;

  for (list<string>::iterator it = courses.begin(); it != courses.end(); it++) {
    if (counter != 0) {
      cout << ", ";
    }
    cout << counter++ << ". " << (*it);
  }
}

int main() {
  list<string> courses;

  addCourses(courses);
  displayCourses(courses);
  sortList(courses);
  displayCourses(courses);
  reverseList(courses);
  displayCourses(courses);

  return 0;
}
