cout << (num_guess > number ? "too_big" : (num_guess < number ? "too_small" : "you_guess_the_number_it's:" + to_string(number) + " you_took_" + to_string(trys) + "_trys")) << endl;
