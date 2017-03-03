union Foo {
  int a;
  bool b;
};

/*
OUTPUT:
{
  "types": [{
      "id": 0,
      "usr": "c:@U@Foo",
      "short_name": "Foo",
      "qualified_name": "Foo",
      "definition": "1:1:7",
      "vars": [0, 1],
      "uses": ["*1:1:7"]
    }],
  "functions": [],
  "variables": [{
      "id": 0,
      "usr": "c:@U@Foo@FI@a",
      "short_name": "a",
      "qualified_name": "Foo::a",
      "definition": "1:2:7",
      "declaring_type": 0,
      "uses": ["1:2:7"]
    }, {
      "id": 1,
      "usr": "c:@U@Foo@FI@b",
      "short_name": "b",
      "qualified_name": "Foo::b",
      "definition": "1:3:8",
      "declaring_type": 0,
      "uses": ["1:3:8"]
    }]
}
*/