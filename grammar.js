module.exports = grammar({
  name: "rec",

  // Explicitly handle whitespace
  extras: $ => [],

  rules: {
    database: $ => repeat(choice(
      $._statement,
      /\s+/,
      $.comment
    )),

    _statement: $ => choice(
      $.field
    ),

    field: $ => seq(
      field('name', $.key),
      ":",
      field('value', $.value)
    ),

    key: $ => /[^\n:]+/,
    value: $ => choice(
      seq(/[^\n]+/, repeat(/\n\+ [^\n]+/)),
      repeat1(/\n\+ [^\n]+/)
    ),

    comment: $ => token.immediate(/#[^\n]+/),
  }
})
