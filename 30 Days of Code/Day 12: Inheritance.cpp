class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        /*	
        *   Class Constructor
          Student(string firstName, string lastName, int id, vector<int> scores) : Person(firstName, lastName, id) {

        this->testScores = scores;

    }
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        Student(string firstName, string lastName, int id, vector<int> scores) : Person(firstName, lastName, id) {

        this->testScores = scores;

    }
        //Student(string firstName, string lastName, int id, vector<int>score):Person (firstName, lastName,id)
       /* {
            this->testScores=testScores;
        }*/
        // Write your constructor here

        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        char calculate() {

        int total = 0;



        for (int i = 0; i < this->testScores.size(); i++)

            total += this->testScores[i];



        int avg = (int) (total / testScores.size());



        if (avg >= 90 && avg <= 100) return 'O';

        if (avg >= 80 && avg < 90) return 'E';

        if (avg >= 70 && avg < 80) return 'A';

        if (avg >= 55 && avg < 70) return 'P';

        if (avg >= 40 && avg < 55) return 'D';

        return 'T';

    }

};


