/*

Contributors to the tool :
Souradeep Dutta

email : souradeep.dutta@colorado.edu

LICENSE : Please see the license file, in the main directory

*/

#include "propagate_intervals.h"
using namespace std;
using namespace std::chrono;

int main(int argc, char ** argv)
{
	int run_benchmark_no = -1;
	char key[] = "all";
	bool run_all = false;
	if(argc != 2)
	{
		cout << "Wrong number of command line arguments : " << endl;
		cout << "Please pass the benchmark number to run it. " << endl;
		cout << "Exiting... " << endl;
		exit(0);
	}
	else if(strcmp(key, argv[1]) == 0)
	{
		run_all = true;
	}
	else
	{
		sscanf(argv[1], "%d", &run_benchmark_no);
	}


	vector< vector< datatype > > input_interval(2, vector< datatype >(2,0));
	vector< vector< datatype > > input_constraints;
	clock_t begin, end;
	vector< datatype > output_range(2,0);
	// Simple range propagation
	// sherlock_parameters.verbosity = true;
	// sherlock_parameters.grad_search_point_verbosity = true;
	sherlock_parameters.time_verbosity = true;

	if((run_benchmark_no == 0) || (run_all))
	{
		char benchmark_0_name[] = "./network_files/neural_network_information_0" ;
		network_handler benchmark_0(benchmark_0_name);

		input_interval[0][0] = 0;input_interval[0][1] = 10;
		input_interval[1][0] = 0;input_interval[1][1] = 10;

		create_constraint_from_interval(input_constraints, input_interval);

		begin = clock();


	 	benchmark_0.return_interval_output(input_constraints, output_range, 1);
		cout << "output_range = [" << output_range[0] << " , " << output_range[1] << " ]" << endl;
		end = clock();
		printf("time cost for Sherlock benchmark 0 ------------------ %lf\n", (double)(end - begin) / CLOCKS_PER_SEC);

	}
	if ((run_benchmark_no == 1) || (run_all)) {
		// Simple range propagation
		char benchmark_1_name[] = "./network_files/neural_network_information_1" ;
		sherlock_parameters.MILP_tolerance = 1e-2;
		network_handler benchmark_1(benchmark_1_name);

		input_interval[0][0] = 0;input_interval[0][1] = 10;
		input_interval[1][0] = 0;input_interval[1][1] = 10;

		create_constraint_from_interval(input_constraints, input_interval);

		begin = clock();
		benchmark_1.return_interval_output(input_constraints, output_range, 1);
		cout << "output_range = [" << output_range[0] << " , " << output_range[1] << " ]" << endl;
		end = clock();
		printf("time cost for Sherlock benchmark 1 ------------------ %lf\n", (double)(end - begin) / CLOCKS_PER_SEC);


	}
	if ((run_benchmark_no == 2) || (run_all)) {
		// Simple range propagation
		char benchmark_2_name[] = "./network_files/neural_network_information_2" ;
		sherlock_parameters.gradient_rate = 1e-4;
		sherlock_parameters.grad_scaling_factor = 2e1;
		sherlock_parameters.MILP_tolerance = 8e-2;
		sherlock_parameters.scale_factor_for_M = 1.3;

		network_handler benchmark_2(benchmark_2_name);

		input_interval[0][0] = 0;input_interval[0][1] = 10;
		input_interval[1][0] = 0;input_interval[1][1] = 10;

		create_constraint_from_interval(input_constraints, input_interval);

		begin = clock();
		benchmark_2.return_interval_output(input_constraints, output_range, 1);
		cout << "output_range = [" << output_range[0] << " , " << output_range[1] << " ]" << endl;
		end = clock();
		printf("time cost for Sherlock benchmark 2 ------------------ %lf\n", (double)(end - begin) / CLOCKS_PER_SEC);
	}
	if ((run_benchmark_no == 3) || (run_all)) {
		// Simple range propagation
		char benchmark_3_name[] = "./network_files/neural_network_information_3" ;

		network_handler benchmark_3(benchmark_3_name);

		input_interval[0][0] = 0;input_interval[0][1] = 10;
		input_interval[1][0] = 0;input_interval[1][1] = 10;

		create_constraint_from_interval(input_constraints, input_interval);

		begin = clock();
		benchmark_3.return_interval_output(input_constraints, output_range, 1);
		cout << "output_range = [" << output_range[0] << " , " << output_range[1] << " ]" << endl;
		end = clock();
		printf("time cost for Sherlock benchmark 3 ------------------ %lf\n", (double)(end - begin) / CLOCKS_PER_SEC);
	}
	if ((run_benchmark_no == 4) || (run_all)) {
		// Simple range propagation
		char benchmark_4_name[] = "./network_files/neural_network_information_4" ;

		network_handler benchmark_4(benchmark_4_name);

		input_interval[0][0] = 0;input_interval[0][1] = 10;
		input_interval[1][0] = 0;input_interval[1][1] = 10;

		create_constraint_from_interval(input_constraints, input_interval);

		begin = clock();
		benchmark_4.return_interval_output(input_constraints, output_range, 1);
		cout << "output_range = [" << output_range[0] << " , " << output_range[1] << " ]" << endl;
		end = clock();
		printf("time cost for Sherlock benchmark 4 ------------------ %lf\n", (double)(end - begin) / CLOCKS_PER_SEC);

	}
	if ((run_benchmark_no == 5) || (run_all)) {
		// Simple range propagation
		char benchmark_5_name[] = "./network_files/neural_network_information_5" ;
		sherlock_parameters.MILP_tolerance = 2e-2;

		network_handler benchmark_5(benchmark_5_name);

		input_interval.clear();
		input_interval.resize(3);
		input_interval[0].push_back(-0.5);input_interval[0].push_back(0.5);;
		input_interval[1].push_back(-0.5);input_interval[1].push_back(0.5);;
		input_interval[2].push_back(-0.5);input_interval[2].push_back(0.5);;

		create_constraint_from_interval(input_constraints, input_interval);

		begin = clock();
		benchmark_5.return_interval_output(input_constraints, output_range, 1);
		cout << "output_range = [" << output_range[0] << " , " << output_range[1] << " ]" << endl;
		end = clock();
		printf("time cost for Sherlock benchmark 5 ------------------ %lf\n", (double)(end - begin) / CLOCKS_PER_SEC);

	}
	if ((run_benchmark_no == 6) || (run_all)) {
		//	Simple range propagation
		char benchmark_6_name[] = "./network_files/neural_network_information_6" ;

		network_handler benchmark_6(benchmark_6_name);

		input_interval.clear();
		input_interval.resize(3);
		input_interval[0].push_back(-0.5);input_interval[0].push_back(0.5);;
		input_interval[1].push_back(-0.5);input_interval[1].push_back(0.5);;
		input_interval[2].push_back(-0.5);input_interval[2].push_back(0.5);;

		create_constraint_from_interval(input_constraints, input_interval);

		begin = clock();
		benchmark_6.return_interval_output(input_constraints, output_range, 1);
		cout << "output_range = [" << output_range[0] << " , " << output_range[1] << " ]" << endl;
		end = clock();
		printf("time cost for Sherlock benchmark 6 ------------------ %lf\n", (double)(end - begin) / CLOCKS_PER_SEC);

	}
	if ((run_benchmark_no == 7) || (run_all)) {
		//	Simple range propagation
		char benchmark_7_name[] = "./network_files/neural_network_information_7" ;
		network_handler benchmark_7(benchmark_7_name);

		input_interval.clear();
		input_interval.resize(4);
		input_interval[0].push_back(-0.1);input_interval[0].push_back(0.1);
		input_interval[1].push_back(-0.1);input_interval[1].push_back(0.1);
		input_interval[2].push_back(-0.1);input_interval[2].push_back(0.1);
		input_interval[3].push_back(-0.1);input_interval[3].push_back(0.1);

		create_constraint_from_interval(input_constraints, input_interval);

		begin = clock();
		benchmark_7.return_interval_output(input_constraints, output_range, 1);
		cout << "output_range = [" << output_range[0] << " , " << output_range[1] << " ]" << endl;
		end = clock();
		printf("time cost for Sherlock benchmark 7 ------------------ %lf\n", (double)(end - begin) / CLOCKS_PER_SEC);

	}
	if ((run_benchmark_no == 8) || (run_all)) {
		char benchmark_8_name[] = "./network_files/neural_network_information_8" ;
		network_handler benchmark_8(benchmark_8_name);

		input_interval.clear();
		input_interval.resize(3);
		input_interval[0].push_back(-0.5);input_interval[0].push_back(0.5);
		input_interval[1].push_back(-0.5);input_interval[1].push_back(0.5);
		input_interval[2].push_back(-0.5);input_interval[2].push_back(0.5);

		create_constraint_from_interval(input_constraints, input_interval);

		begin = clock();
		benchmark_8.return_interval_output(input_constraints, output_range, 1);
		cout << "output_range = [" << output_range[0] << " , " << output_range[1] << " ]" << endl;
		end = clock();
		printf("time cost for Sherlock benchmark 8 ------------------ %lf\n", (double)(end - begin) / CLOCKS_PER_SEC);

	}
	if ((run_benchmark_no == 9) || (run_all)) {
		char benchmark_9_name[] = "./network_files/neural_network_information_9" ;
		network_handler benchmark_9(benchmark_9_name);

		input_interval.clear();
		input_interval.resize(3);
		input_interval[0].push_back(-0.5);input_interval[0].push_back(0.5);
		input_interval[1].push_back(-0.5);input_interval[1].push_back(0.5);
		input_interval[2].push_back(-0.5);input_interval[2].push_back(0.5);

		create_constraint_from_interval(input_constraints, input_interval);

		begin = clock();
		benchmark_9.return_interval_output(input_constraints, output_range, 1);
		cout << "output_range = [" << output_range[0] << " , " << output_range[1] << " ]" << endl;
		end = clock();
		printf("time cost for Sherlock benchmark 9 ------------------ %lf\n", (double)(end - begin) / CLOCKS_PER_SEC);

	}
	if ((run_benchmark_no == 10) || (run_all)) {
		char benchmark_10_name[] = "./network_files/neural_network_information_10" ;
		sherlock_parameters.gradient_rate = 1e-6;
		sherlock_parameters.grad_scaling_factor = 2e1;
		sherlock_parameters.grad_switch_count = 1e2;
		sherlock_parameters.grad_termination_limit = 1e-6;
		sherlock_parameters.MILP_e_tolerance = 1e-15;
		sherlock_parameters.scale_factor_for_M = 1.5;
		sherlock_parameters.MILP_tolerance = 5e-2;

		network_handler benchmark_10(benchmark_10_name);


		input_interval.clear();
		input_interval.resize(3);
		input_interval[0].push_back(-0.1);input_interval[0].push_back(0.1);
		input_interval[1].push_back(-0.1);input_interval[1].push_back(0.1);
		input_interval[2].push_back(-0.1);input_interval[2].push_back(0.1);

		create_constraint_from_interval(input_constraints, input_interval);

		begin = clock();
		benchmark_10.return_interval_output(input_constraints, output_range, 1);
		cout << "output_range = [" << output_range[0] << " , " << output_range[1] << " ]" << endl;
		end = clock();
		printf("time cost for Sherlock benchmark 10 ------------------ %lf\n", (double)(end - begin) / CLOCKS_PER_SEC);

	}
	if ((run_benchmark_no == 11) || (run_all)) {
		char benchmark_11_name[] = "./network_files/neural_network_information_11" ;
		sherlock_parameters.gradient_rate = 1e-4;
		sherlock_parameters.grad_scaling_factor = 5e1;
		sherlock_parameters.grad_switch_count = 1e3;
		sherlock_parameters.grad_termination_limit = 1e-7;
		sherlock_parameters.MILP_tolerance = 5e-1;
		sherlock_parameters.MILP_e_tolerance = 1e-10;
		sherlock_parameters.scale_factor_for_M = 1;
		sherlock_parameters.do_LP_certificate = true;
		sherlock_parameters.LP_tolerance_limit = 1e-2;

		network_handler benchmark_11(benchmark_11_name);

		input_interval.clear();
		input_interval.resize(3);
		input_interval[0].push_back(-0.1);input_interval[0].push_back(0.1);
		input_interval[1].push_back(-0.1);input_interval[1].push_back(0.1);
		input_interval[2].push_back(-0.1);input_interval[2].push_back(0.1);

		create_constraint_from_interval(input_constraints, input_interval);

		begin = clock();
		benchmark_11.return_interval_output(input_constraints, output_range, 1);
		cout << "output_range = [" << output_range[0] << " , " << output_range[1] << " ]" << endl;
		end = clock();
		printf("time cost for Sherlock benchmark 11 ------------------ %lf\n", (double)(end - begin) / CLOCKS_PER_SEC);

	}
	if ((run_benchmark_no == 12) || (run_all)) {
		char benchmark_12_name[] = "./network_files/neural_network_information_12" ;
		network_handler benchmark_12(benchmark_12_name);
		sherlock_parameters.gradient_rate = 1e-2;
		sherlock_parameters.grad_scaling_factor = 5e1;
		sherlock_parameters.grad_switch_count = 1e3;
		sherlock_parameters.grad_termination_limit = 1e-7;
		sherlock_parameters.MILP_tolerance = 5e-1;
		sherlock_parameters.MILP_e_tolerance = 1e-10;
		sherlock_parameters.scale_factor_for_M = 1;
		sherlock_parameters.do_LP_certificate = true;
		sherlock_parameters.LP_tolerance_limit = 1e-2;


		input_interval.clear();
		input_interval.resize(3);
		input_interval[0].push_back(-0.1);input_interval[0].push_back(0.1);
		input_interval[1].push_back(-0.1);input_interval[1].push_back(0.1);
		input_interval[2].push_back(-0.1);input_interval[2].push_back(0.1);

		create_constraint_from_interval(input_constraints, input_interval);

		begin = clock();
		benchmark_12.return_interval_output(input_constraints, output_range, 1);
		cout << "output_range = [" << output_range[0] << " , " << output_range[1] << " ]" << endl;
		end = clock();
		printf("time cost for Sherlock benchmark 12 ------------------ %lf\n", (double)(end - begin) / CLOCKS_PER_SEC);

	}
	if ((run_benchmark_no == 13) || (run_all)) {
		char benchmark_13_name[] = "./network_files/neural_network_information_13" ;
		sherlock_parameters.gradient_rate = 1e-2;
		sherlock_parameters.grad_scaling_factor = 5e1;
		sherlock_parameters.grad_switch_count = 1e3;
		sherlock_parameters.grad_termination_limit = 1e-7;
		sherlock_parameters.MILP_tolerance = 5e-1;
		sherlock_parameters.MILP_e_tolerance = 1e-10;
		sherlock_parameters.scale_factor_for_M = 1;
		sherlock_parameters.LP_tolerance_limit = 1e-2;
		sherlock_parameters.do_LP_certificate = true;

		network_handler benchmark_13(benchmark_13_name);



		input_interval.clear();
		input_interval.resize(3);
		input_interval[0].push_back(-0.1);input_interval[0].push_back(0.1);
		input_interval[1].push_back(-0.1);input_interval[1].push_back(0.1);
		input_interval[2].push_back(-0.1);input_interval[2].push_back(0.1);

		create_constraint_from_interval(input_constraints, input_interval);

		begin = clock();
		benchmark_13.return_interval_output(input_constraints, output_range, 1);
		cout << "output_range = [" << output_range[0] << " , " << output_range[1] << " ]" << endl;
		end = clock();
		printf("time cost for Sherlock benchmark 13 ------------------ %lf\n", (double)(end - begin) / CLOCKS_PER_SEC);

	}
	if ((run_benchmark_no == 14) || (run_all)) {
		char benchmark_14_name[] = "./network_files/neural_network_information_14" ;
		sherlock_parameters.gradient_rate = 1e-2;
		sherlock_parameters.grad_scaling_factor = 5e1;
		sherlock_parameters.grad_switch_count = 1e3;
		sherlock_parameters.grad_termination_limit = 1e-7;
		sherlock_parameters.MILP_tolerance = 5e-1;
		sherlock_parameters.MILP_e_tolerance = 1e-10;
		sherlock_parameters.scale_factor_for_M = 1;
		sherlock_parameters.do_LP_certificate = true;
		sherlock_parameters.LP_tolerance_limit = 1e-2;

		network_handler benchmark_14(benchmark_14_name);

		input_interval.clear();
		input_interval.resize(3);
		input_interval[0].push_back(-0.1);input_interval[0].push_back(0.1);
		input_interval[1].push_back(-0.1);input_interval[1].push_back(0.1);
		input_interval[2].push_back(-0.1);input_interval[2].push_back(0.1);

		create_constraint_from_interval(input_constraints, input_interval);

		begin = clock();
		benchmark_14.return_interval_output(input_constraints, output_range, 1);
		cout << "output_range = [" << output_range[0] << " , " << output_range[1] << " ]" << endl;
		end = clock();
		printf("time cost for Sherlock benchmark 14 ------------------ %lf\n", (double)(end - begin) / CLOCKS_PER_SEC);

	}
	if((run_benchmark_no == 15) || (run_all))
	{
		char benchmark_15_name[] = "./network_files/neural_network_information_15" ;
		sherlock_parameters.gradient_rate = 1e-4; //1e-2
		sherlock_parameters.grad_scaling_factor = 1e0; //5e1
		sherlock_parameters.grad_switch_count = 1e3;
		sherlock_parameters.grad_termination_limit = 1e-7;
		sherlock_parameters.MILP_tolerance = 5e-5; // 5e-1
		sherlock_parameters.MILP_e_tolerance = 1e-10;
		sherlock_parameters.scale_factor_for_M = 1.1; //1
		sherlock_parameters.do_LP_certificate = true;
		sherlock_parameters.verbosity = true;

		network_handler benchmark_15(benchmark_15_name);


		input_interval.clear();
		input_interval.resize(3);
		input_interval[0].push_back(-0.1);input_interval[0].push_back(0.1);
		input_interval[1].push_back(-0.1);input_interval[1].push_back(0.1);
		input_interval[2].push_back(-0.1);input_interval[2].push_back(0.1);

		create_constraint_from_interval(input_constraints, input_interval);

		begin = clock();
		benchmark_15.return_interval_output(input_constraints, output_range, 1);
		cout << "output_range = [" << output_range[0] << " , " << output_range[1] << " ]" << endl;
		end = clock();
		printf("time cost for Sherlock benchmark 15 ------------------ %lf\n", (double)(end - begin) / CLOCKS_PER_SEC);
	}
	if((run_benchmark_no == 16) || (run_all))
	{
		char benchmark_16_name[] = "./network_files/neural_network_information_patrick" ;
		sherlock_parameters.MILP_tolerance = 2e-2;

		network_handler benchmark_16(benchmark_16_name);

		input_interval.clear();
		input_interval.resize(3);
		input_interval[0].push_back(0.0);input_interval[0].push_back(1.0);;
		input_interval[1].push_back(0.0);input_interval[1].push_back(1.0);;
		input_interval[2].push_back(0.0);input_interval[2].push_back(1.0);;




		create_constraint_from_interval(input_constraints, input_interval);

		begin = clock();
		benchmark_16.return_interval_output(input_constraints, output_range, 1);
		cout << "output_range = [" << output_range[0] << " , " << output_range[1] << " ]" << endl;
		end = clock();
		printf("time cost for Sherlock benchmark 16 ------------------ %lf\n", (double)(end - begin) / CLOCKS_PER_SEC);

		vector< vector < vector < double > > > weights;
		vector< vector < double > > biases;
		benchmark_16.return_network_information(weights, biases);
		benchmark_16.cast_to_single_output_network(weights, biases, 2);

		int number_of_samples = 100;
		for(int i =0;i < number_of_samples; i++)
		{
			vector< double > random_input(3,0);
			for(int j = 0; j < 3 ; j++)
			{
				random_input[j] = input_interval[j][0] + (input_interval[j][1] - input_interval[j][0])*
				((double)(rand()%100)/(double)100) ;
			}

			vector< vector< unsigned int > > fake_input;
			double output = compute_network_output(random_input, weights, biases, fake_input);

			cout << "For input sample =  [" << random_input[0] << " , " << random_input[1] << " "
			<< random_input[2] << " ] " << " output = " << output << endl;

		}
	}
	if((run_benchmark_no == 17) || (run_all)){
		char benchmark_17_name[] = "./network_files/1L_abalone_nets.txt" ;
		sherlock_parameters.MILP_tolerance = 2e-6;

		network_handler benchmark_17(benchmark_17_name);
		input_interval.clear();
		input_interval.resize(8);
		input_interval[0].push_back(0.0);input_interval[0].push_back(0.0);;
		input_interval[1].push_back(0.0);input_interval[1].push_back(0.0);;
		input_interval[2].push_back(0.0);input_interval[2].push_back(0.0);;
		input_interval[3].push_back(0.0);input_interval[3].push_back(0.0);;
		input_interval[4].push_back(0.0);input_interval[4].push_back(0.0);;
		input_interval[5].push_back(0.0);input_interval[5].push_back(0.0);;
		input_interval[6].push_back(0.005);input_interval[6].push_back(0.76);;
		input_interval[7].push_back(0.0015);input_interval[7].push_back(1.005);;

		create_constraint_from_interval(input_constraints, input_interval);
		begin = clock();
		benchmark_17.return_interval_output(input_constraints, output_range, 1);
		cout << "output_range = [" << output_range[0] << " , " << output_range[1] << " ]" << endl;
		end = clock();
		printf("time cost for Sherlock benchmark 17 ------------------ %lf\n", (double)(end - begin) / CLOCKS_PER_SEC);


	}
	if((run_benchmark_no == 18) || (run_all)){
		char benchmark_18_name[] = "./network_files/2L_abalone_nets.txt" ;
		sherlock_parameters.MILP_tolerance = 2e-6;

		network_handler benchmark_18(benchmark_18_name);
		input_interval.clear();
		input_interval.resize(8);
		input_interval[0].push_back(0.0);input_interval[0].push_back(0.0);;
		input_interval[1].push_back(0.0);input_interval[1].push_back(0.0);;
		input_interval[2].push_back(0.0);input_interval[2].push_back(0.0);;
		input_interval[3].push_back(0.0);input_interval[3].push_back(0.0);;
		input_interval[4].push_back(0.0);input_interval[4].push_back(0.0);;
		input_interval[5].push_back(0.0);input_interval[5].push_back(0.0);;
		input_interval[6].push_back(0.005);input_interval[6].push_back(0.76);;
		input_interval[7].push_back(0.0015);input_interval[7].push_back(1.005);;

		create_constraint_from_interval(input_constraints, input_interval);
		begin = clock();
		benchmark_18.return_interval_output(input_constraints, output_range, 1);
		cout << "output_range = [" << output_range[0] << " , " << output_range[1] << " ]" << endl;
		end = clock();
		printf("time cost for Sherlock benchmark 17 ------------------ %lf\n", (double)(end - begin) / CLOCKS_PER_SEC);


	}
	if((run_benchmark_no == 19) || (run_all)){
		char benchmark_19_name[] = "./network_files/2L_pollution_nets.txt" ;
		sherlock_parameters.MILP_tolerance = 2e-6;

		network_handler benchmark_19(benchmark_19_name);
		input_interval.clear();
		input_interval.resize(24);
		input_interval[0].push_back(0.0);input_interval[0].push_back(0.0);;
		input_interval[1].push_back(0.0);input_interval[1].push_back(0.0);;
		input_interval[2].push_back(0.0);input_interval[2].push_back(0.0);;
		input_interval[3].push_back(0.0);input_interval[3].push_back(0.0);;
		input_interval[4].push_back(0.0);input_interval[4].push_back(0.0);;
		input_interval[5].push_back(0.0);input_interval[5].push_back(0.0);;
		input_interval[6].push_back(0.0);input_interval[6].push_back(0.0);;
		input_interval[7].push_back(0.0);input_interval[7].push_back(0.0);;

		input_interval[8].push_back(0.0);input_interval[8].push_back(0.0);;
		input_interval[9].push_back(0.0);input_interval[9].push_back(0.0);;
		input_interval[10].push_back(0.0);input_interval[10].push_back(0.0);;
		input_interval[11].push_back(0.0);input_interval[11].push_back(0.0);;
		input_interval[12].push_back(0.0);input_interval[12].push_back(0.0);;
		input_interval[13].push_back(0.0);input_interval[13].push_back(0.0);;
		input_interval[14].push_back(0.0);input_interval[14].push_back(0.0);;
		input_interval[15].push_back(0.0);input_interval[15].push_back(0.0);;

		input_interval[16].push_back(0.0);input_interval[16].push_back(0.0);;
		input_interval[17].push_back(0.0);input_interval[17].push_back(0.0);;
		input_interval[18].push_back(0.0);input_interval[18].push_back(0.0);;
		input_interval[19].push_back(0.0);input_interval[19].push_back(0.0);;
		input_interval[20].push_back(0.0);input_interval[20].push_back(0.0);;
		input_interval[21].push_back(0.0);input_interval[21].push_back(0.0);;
		input_interval[22].push_back(1.14);input_interval[22].push_back(22.05);;
		input_interval[23].push_back(20.25);input_interval[23].push_back(97.9400);;

		create_constraint_from_interval(input_constraints, input_interval);
		begin = clock();
		benchmark_19.return_interval_output(input_constraints, output_range, 3);
		cout << "output_range = [" << output_range[0] << " , " << output_range[1] << " ]" << endl;
		end = clock();
		printf("time cost for Sherlock benchmark 17 ------------------ %lf\n", (double)(end - begin) / CLOCKS_PER_SEC);


	}
	if((run_benchmark_no == 20) || (run_all)){
		char benchmark_20_name[] = "./network_files/2L_housing_nets.txt" ;
		sherlock_parameters.MILP_tolerance = 2e-6;

		network_handler benchmark_20(benchmark_20_name);
		input_interval.clear();
		input_interval.resize(12);
		input_interval[0].push_back(0.0);input_interval[0].push_back(0.0);;
		input_interval[1].push_back(0.0);input_interval[1].push_back(0.0);;
		input_interval[2].push_back(0.0);input_interval[2].push_back(0.0);;
		input_interval[3].push_back(0.0);input_interval[3].push_back(0.0);;
		input_interval[4].push_back(0.0);input_interval[4].push_back(0.0);;
		input_interval[5].push_back(0.0);input_interval[5].push_back(0.0);;
		input_interval[6].push_back(0.0);input_interval[6].push_back(0.0);;
		input_interval[7].push_back(0.0);input_interval[7].push_back(0.0);;

		input_interval[8].push_back(0.0);input_interval[8].push_back(0.0);;
		input_interval[9].push_back(0.0);input_interval[9].push_back(0.0);;
		input_interval[10].push_back(0.32);input_interval[10].push_back(396.9);;
		input_interval[11].push_back(1.73);input_interval[11].push_back(37.97);;

		create_constraint_from_interval(input_constraints, input_interval);
		begin = clock();
		benchmark_20.return_interval_output(input_constraints, output_range, 1);
		cout << "output_range = [" << output_range[0] << " , " << output_range[1] << " ]" << endl;
		end = clock();
		printf("time cost for Sherlock benchmark 17 ------------------ %lf\n", (double)(end - begin) / CLOCKS_PER_SEC);


	}
  return 0;
}
