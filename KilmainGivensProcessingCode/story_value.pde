class Story {
  String background;
  void do_story(String story_value) {
    if (story_value=="1-1") {
      story_one_one();
    }
     if (story_value=="1-2") {
      story_one_two();
    }
  }
private void story_one_one() {
 image(shrekle, 0, 0);
  }
void story_one_two() {
 image(Toad_Soup, 1500, 0);
  }
}
