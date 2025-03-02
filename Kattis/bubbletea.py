def __main__():
    min = 2000000000
    N=int(input())
    tea_costs=list(map(int, input().split()))
    M=int(input())
    topping_costs=list(map(int, input().split()))

    for cost_index in range(0, N):
        temp = list(map(int, input().split()))
        k = temp[0]
        cost_match_index_list = temp[1:N-1]
        for i, cost in enumerate(cost_match_index_list):
           if 
            
        


    for (int j = 0; j < k; j++) {
      int ki;
      cin >> ki;
      if (tea_costs[cost_index] + topping_costs[ki] < min)
        min = tea_costs[cost_index] + topping_costs[ki];
    }
  }

  std::cout << "\n min=" << min << std::endl;
  int money;
  std::cin >> money;
  std::cout << (money / min) - 1;
}
